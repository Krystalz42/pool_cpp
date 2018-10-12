//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include "instructions/IncrementPointer.hpp"

/** Static **/
/** Constructor **/

IncrementPointer::IncrementPointer() {

}

IncrementPointer::IncrementPointer(IncrementPointer const &) {

}

/** Public **/


void IncrementPointer::execute(std::list<char> *data, std::list<char>::iterator *it) const{
	std::list<char>::iterator temp = *it;

	if (data->end() == ++(temp)) {
		*it = data->insert(temp, '\0');
	} else {
		++(*it);
	}
}

/** Private **/
/** Operator **/
IncrementPointer &IncrementPointer::operator=(IncrementPointer const &) {
	return *this;
}
/** Destructor **/

IncrementPointer::~IncrementPointer() {

}




