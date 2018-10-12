//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/DecrementPointer.hpp"

void DecrementPointer::execute(std::list<char> *
        , std::list<char>::iterator *it) const {
	--(*it);
}
