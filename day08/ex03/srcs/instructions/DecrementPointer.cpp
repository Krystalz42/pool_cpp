//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/DecrementPointer.hpp"


/** Static **/
/** Constructor **/

DecrementPointer::DecrementPointer() {

}

DecrementPointer::DecrementPointer(DecrementPointer const &) {

}

/** Public **/


void DecrementPointer::execute(std::list<char> *
		, std::list<char>::iterator *it) const {
	--(*it);
}

/** Private **/
/** Operator **/
DecrementPointer &DecrementPointer::operator=(DecrementPointer const &) {
	return *this;
}
/** Destructor **/

DecrementPointer::~DecrementPointer() {

}



