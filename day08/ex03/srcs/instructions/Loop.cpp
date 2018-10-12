//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include <zconf.h>
#include "instructions/Loop.hpp"

/** Static **/
/** Constructor **/

Loop::Loop() {

}

Loop::Loop(Loop const &) {

}

/** Public **/


void Loop::execute(std::list<char> * lst, std::list<char>::iterator *it) const {
	std::deque<IExecute *>::const_iterator itd;
	std::deque<IExecute *>::const_iterator itde =  deque.end();
	while (**it != 0) {
		for (itd = deque.begin(); itd != itde; ++itd) {
			(*itd)->execute(lst, it);
		}
	}
}

/** Private **/
/** Operator **/
Loop &Loop::operator=(Loop const &) {
	return *this;
}
/** Destructor **/

Loop::~Loop() {
	IExecute *iExecute;
	for (;!deque.empty();) {
		iExecute = deque.back();
		deque.pop_back();
		delete iExecute;
	}
}


