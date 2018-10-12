//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/OutputByte.hpp"

void OutputByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	std::cerr << **it;
}
