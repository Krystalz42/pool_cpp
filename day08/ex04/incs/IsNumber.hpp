//
// Created by Alexandre ROULIN on 12/10/2018.
//

#ifndef EX04_ISNUMBER_HPP
#define EX04_ISNUMBER_HPP

#include <string>
#include <ostream>
#include "IToken.hpp"

class IsNumber : virtual public IToken {
	std::string		nu;
	IsNumber();
public:
	~IsNumber();
	IsNumber(IsNumber const &);
	IsNumber &operator=(IsNumber const &);
	IsNumber(const std::string &nu);
	virtual std::string toString() const;

	virtual void execute(std::stack<IToken *> &) const;

	virtual const std::string &getValue() const;
};

#endif //EX04_ISNUMBER_HPP
