//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_DECREMENT_HPP
#define EX03_DECREMENT_HPP

#include "IExecute.hpp"

class DecrementPointer : public virtual IExecute {
public:
	DecrementPointer();
	~DecrementPointer();
	DecrementPointer(DecrementPointer const &);
	DecrementPointer &operator=(DecrementPointer const &);
	virtual void execute(std::list<char> *, std::list<char>::iterator *it) const;
};

#endif //EX03_DECREMENT_HPP
