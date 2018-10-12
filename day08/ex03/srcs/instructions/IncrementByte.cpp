//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/IncrementByte.hpp"

void IncrementByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	++*(*it);
}
