//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_INCREMENT_HPP
#define EX03_INCREMENT_HPP

#include "IExecute.hpp"

class IncrementPointer : virtual public IExecute {
public:
	IncrementPointer();
	~IncrementPointer();
	IncrementPointer(IncrementPointer const &);
	IncrementPointer &operator=(IncrementPointer const &);
	virtual void execute(std::list<char> *, std::list<char>::iterator *it) const;
};

#endif //EX03_INCREMENT_HPP
