//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <ScalarConversion.hpp>
#include <iostream>

int main (int argc, char **argv) {

	if (argc == 2)
		ScalarConversion(std::string(argv[1]));
	else
		std::cout << "usage: './scalar_conversion' 'a/1/42.0f/inf/nan ...' " << std::endl;
	return 0;
}
