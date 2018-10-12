//
// Created by Alexandre ROULIN on 12/10/2018.
//

#include <iostream>
#include <Tokenization.hpp>

int main (int argc, char **argv) {
	Tokenization t;
	if (argc == 2) {
		std::string arg(argv[1]);
		t.evaluateArgument(arg);
		t.printPostFix();
		t.evaluatePostFix();
	}
	else {
		std::cerr << "Error " << std::endl;
	}
}