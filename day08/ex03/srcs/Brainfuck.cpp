//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <Brainfuck.hpp>
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <sstream>
#include <instructions/IncrementByte.hpp>
#include <instructions/DecrementByte.hpp>
#include <instructions/DecrementPointer.hpp>
#include <instructions/IncrementPointer.hpp>
#include <instructions/InputByte.hpp>
#include <instructions/Loop.hpp>
#include <instructions/OutputByte.hpp>
#include <brainfuck.h>
#include <stdlib.h>
#include <zconf.h>

/** Constructor **/
Brainfuck::Brainfuck() {
	ptr[ICR_PTR] = &Brainfuck::incrementPointer;
	ptr[DCR_PTR] = &Brainfuck::decrementPointer;
	ptr[ICR_BYTE] = &Brainfuck::incrementByte;
	ptr[DCR_BYTE] = &Brainfuck::decrementByte;
	ptr[INP_BYTE] = &Brainfuck::inputByte;
	ptr[OPT_BYTE] = &Brainfuck::outputByte;
	ptr[LOOP_BEG] = &Brainfuck::loop;
	data = new std::list<char>(1, '\0');
}

Brainfuck::Brainfuck(Brainfuck const &) {

}

/** Public **/

void Brainfuck::readFile(std::ifstream &file) {
	Instruction i;
	std::string ss;
	std::getline(file, ss);

	for (; !ss.empty();) {
		i = getInstruction(ss[0]);
		if (i == LOOP_END) {
			std::cerr << "error : Missing [" << std::endl;
			exit(1);
		} else if (i == NONE) {
			std::cerr << "error : bad char" << std::endl;
			exit(1);
		}
		queue.push((this->*ptr[i])(ss));
		ss = ss.substr(1, ss.size());
	}
}


void Brainfuck::executeInstruction() {
	IExecute * i;
	std::list<char>::iterator it = data->begin();
	while (!queue.empty()) {
		i = queue.front();
		i->execute(data, &it);
		queue.pop();
		delete i;
	}
}
/** Private **/

Instruction Brainfuck::getInstruction(char c) {
	switch (c) {
		case '>' :
			return ICR_PTR;
		case '<' :
			return DCR_PTR;
		case '+' :
			return ICR_BYTE;
		case '-' :
			return DCR_BYTE;
		case ',' :
			return INP_BYTE;
		case '.' :
			return OPT_BYTE;
		case '[' :
			return LOOP_BEG;
		case ']':
			return LOOP_END;
		default:
			return NONE;
	}
}

/** Static **/

IExecute *Brainfuck::decrementByte(std::string &) {
	return new DecrementByte();
}

IExecute *Brainfuck::decrementPointer(std::string &) {
	return new DecrementPointer();
}

IExecute *Brainfuck::incrementByte(std::string &) {
	return new IncrementByte();
}

IExecute *Brainfuck::incrementPointer(std::string &) {
	return new IncrementPointer();
}

IExecute *Brainfuck::inputByte(std::string &) {
	return new InputByte();
}

IExecute *Brainfuck::loop(std::string &ss) {
	Instruction i;
	Loop *l = new Loop();

	ss = ss.substr(1, ss.size());
	for (; !ss.empty();) {
		i = getInstruction(ss[0]);
		if (i == LOOP_END) {
			return l;
		} else if (i == NONE) {
			std::cerr << "error : bad char" << std::endl;
			exit(1);
		}
		l->deque.push_back((this->*ptr[i])(ss));
		ss = ss.substr(1, ss.size());
	}
	std::cerr << "error : Missing ]" << std::endl;
	exit(1);
}


IExecute *Brainfuck::outputByte(std::string &) {
	return new OutputByte();
}

/** Operator **/

Brainfuck &Brainfuck::operator=(Brainfuck const &) {
	return *this;
}


/** Destructor **/



Brainfuck::~Brainfuck() {
}







//	static void (Human::*ptr[])(std::string const &) = {