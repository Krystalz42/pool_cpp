//
// Created by Alexandre ROULIN on 11/10/2018.
//


#include <Brainfuck.hpp>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	Brainfuck bf = Brainfuck();

	if (argc == 2) {
		std::ifstream file(argv[1]);
		if (file.is_open()) {
			bf.readFile(file);
			bf.executeInstruction();
		}
		else
			std::cerr << "Can't open the file" << std::endl;

	} else {
		std::cerr << "Need a file as argument" << std::endl;
	}
}