//
// Created by Alexandre ROULIN on 12/10/2018.
//

#ifndef EX04_ISOPERATOR_HPP
#define EX04_ISOPERATOR_HPP

#include <string>
#include <ostream>
#include "IToken.hpp"

class IsOperator : public virtual IToken {
private:
	std::string			op;
	IsOperator();
public:
	IsOperator(std::string const &);
	IsOperator(IsOperator const &);
	~IsOperator();
	int doOperationAndPrint(int nu1, int nu2) const;
	IsOperator &operator=(IsOperator const &);
	virtual const std::string &getValue() const;

	virtual void execute(std::stack<IToken *> &) const;

	virtual std::string toString() const;
};

#endif //EX04_ISOPERATOR_HPP
