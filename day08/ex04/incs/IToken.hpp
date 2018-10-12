//
// Created by Alexandre ROULIN on 12/10/2018.
//

#ifndef EX04_ITOKEN_HPP
#define EX04_ITOKEN_HPP

#include <stack>

class IToken {
public:
	virtual void 				execute(std::stack<IToken *> &token) const = 0;
	virtual std::string const	&getValue() const = 0;
	virtual std::string			toString() const = 0;
	virtual ~IToken() {};
};

#endif //EX04_ITOKEN_HPP
