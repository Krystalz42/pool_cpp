//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_BRAINFUCK_HPP
#define EX03_BRAINFUCK_HPP

#include <vector>
#include <queue>
#include <map>
#include "instructions/IExecute.hpp"
#include "brainfuck.h"
#include <list>

class Brainfuck {
private:
	std::list<char>				*data;
	std::queue<IExecute *>		queue;
	IExecute *(Brainfuck::*ptr[8])(std::string &);

	Brainfuck &operator=(Brainfuck const &);

public:

	Brainfuck();
	~Brainfuck();
	Brainfuck(Brainfuck const &);

	void readFile(std::ifstream &file);
	void executeInstruction();
	Instruction getInstruction(char c);

	IExecute *incrementByte(std::string & input);
	IExecute *decrementByte(std::string & input);
	IExecute *incrementPointer(std::string & input);
	IExecute *decrementPointer(std::string & input);
	IExecute *inputByte(std::string & input);
	IExecute *outputByte(std::string & input);
	IExecute *loop(std::string & inputinput);

};




#endif //EX03_BRAINFUCK_HPP
