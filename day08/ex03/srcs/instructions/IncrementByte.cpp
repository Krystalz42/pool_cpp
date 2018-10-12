//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/IncrementByte.hpp"

/** Static **/
/** Constructor **/

IncrementByte::IncrementByte() {

}

IncrementByte::IncrementByte(IncrementByte const &) {

}

/** Public **/

void IncrementByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	++*(*it);
}


/** Private **/
/** Operator **/
IncrementByte &IncrementByte::operator=(IncrementByte const &) {
	return *this;
}
/** Destructor **/

IncrementByte::~IncrementByte() {

}




