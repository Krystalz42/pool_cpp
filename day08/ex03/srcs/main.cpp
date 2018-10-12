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
			std::cout << "error" << std::endl;

	} else {
		std::cout << "display" << std::endl;
	}
}