//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/DecrementByte.hpp"

void
DecrementByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	--**it;
}

