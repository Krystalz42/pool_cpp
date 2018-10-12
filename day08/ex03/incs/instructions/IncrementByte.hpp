//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_INCREMENTBYTE_HPP
#define EX03_INCREMENTBYTE_HPP

#include "IExecute.hpp"

class IncrementByte: public virtual IExecute {
public:
	virtual void execute(std::list<char> *, std::list<char>::iterator *it) const;
};

#endif //EX03_INCREMENTBYTE_HPP
