//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_LOOPBEGIN_HPP
#define EX03_LOOPBEGIN_HPP

#include "IExecute.hpp"
#include <deque>

class Loop: public virtual IExecute {
public:
	std::deque<IExecute *> deque;
	virtual void execute(std::list<char> *, std::list<char>::iterator *it) const;
};

#endif //EX03_LOOPBEGIN_HPP
