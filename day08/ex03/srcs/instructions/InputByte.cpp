//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/InputByte.hpp"

/** Static **/
/** Constructor **/

InputByte::InputByte() {

}

InputByte::InputByte(InputByte const &) {

}

/** Public **/

void InputByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	std::cin >> **it;
}


/** Private **/
/** Operator **/
InputByte &InputByte::operator=(InputByte const &) {
	return *this;
}
/** Destructor **/

InputByte::~InputByte() {

}




