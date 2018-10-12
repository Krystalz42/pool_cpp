//
// Created by Alexandre ROULIN on 12/10/2018.
//

#ifndef EX04_TOKENIZATION_HPP
#define EX04_TOKENIZATION_HPP

#include <stack>
#include <sstream>
#include "IToken.hpp"

class Tokenization {
public:
	Tokenization();
	~Tokenization();
	Tokenization(Tokenization const&);
	Tokenization &operator=(Tokenization const&);
	std::deque<IToken *> token_nu;

	void evaluateArgument(std::string &s);

	void evaluatePostFix();

	void printPostFix();

	void printStack(std::stack<IToken *>);
private:
	bool isClosingParanthesis(char p);

	bool isOpeningParanthesis(char p);

	int isOperator(char op);

	bool isNumber(char nu);

	bool isWhiteSpace(char w);
};

#endif //EX04_TOKENIZATION_HPP
