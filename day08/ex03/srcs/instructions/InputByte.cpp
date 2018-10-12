//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/InputByte.hpp"

void InputByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	std::cin >> **it;
}
