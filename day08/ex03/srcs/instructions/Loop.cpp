//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <iostream>
#include <zconf.h>
#include "instructions/Loop.hpp"

void Loop::execute(std::list<char> * lst, std::list<char>::iterator *it) const {
	std::deque<IExecute *>::const_iterator itd;
	std::deque<IExecute *>::const_iterator itde =  deque.end();
	while (**it != 0) {
		for (itd = deque.begin(); itd != itde; ++itd) {
			(*itd)->execute(lst, it);
		}
	}
}
