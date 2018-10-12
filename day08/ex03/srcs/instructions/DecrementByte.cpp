//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include <instructions/DecrementByte.hpp>

#include "instructions/DecrementByte.hpp"

/** Static **/
/** Constructor **/

DecrementByte::DecrementByte() {

}

DecrementByte::DecrementByte(DecrementByte const &) {

}

/** Public **/

void
DecrementByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	--**it;
}

/** Private **/
/** Operator **/
DecrementByte &DecrementByte::operator=(DecrementByte const &) {
	return *this;
}
/** Destructor **/

DecrementByte::~DecrementByte() {

}


