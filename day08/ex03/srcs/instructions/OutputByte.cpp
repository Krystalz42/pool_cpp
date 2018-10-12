//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/OutputByte.hpp"

/** Static **/
/** Constructor **/

OutputByte::OutputByte() {

}

OutputByte::OutputByte(OutputByte const &) {

}

/** Public **/


void OutputByte::execute(std::list<char> *, std::list<char>::iterator *it) const {
	std::cerr << **it;
}


/** Private **/
/** Operator **/
OutputByte &OutputByte::operator=(OutputByte const &) {
	return *this;
}
/** Destructor **/

OutputByte::~OutputByte() {

}


