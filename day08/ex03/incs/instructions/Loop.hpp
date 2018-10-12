//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_LOOPBEGIN_HPP
#define EX03_LOOPBEGIN_HPP

#include "IExecute.hpp"
#include <deque>

class Loop: public virtual IExecute {
public:
	Loop();
	~Loop();
	Loop(Loop const &);
	Loop &operator=(Loop const &);
	virtual void execute(std::list<char> *, std::list<char>::iterator *it) const;

	std::deque<IExecute *> deque;
};

#endif //EX03_LOOPBEGIN_HPP
