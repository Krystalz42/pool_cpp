//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_DECREMENTBYTE_HPP
#define EX03_DECREMENTBYTE_HPP

#include "IExecute.hpp"

class DecrementByte : public virtual IExecute {
public:
	DecrementByte();
	~DecrementByte();
	DecrementByte(DecrementByte const &);
	DecrementByte &operator=(DecrementByte const &);
	virtual void execute(std::list<char> *list, std::list<char>::iterator *it) const;

};

#endif //EX03_DECREMENTBYTE_HPP
