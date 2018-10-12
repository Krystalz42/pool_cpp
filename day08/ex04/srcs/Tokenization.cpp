//
// Created by Alexandre ROULIN on 12/10/2018.
//

#include <Tokenization.hpp>
#include <string>
#include <iostream>
#include <IToken.hpp>
#include <IsNumber.hpp>
#include <IsOperator.hpp>
#include <zconf.h>

/** Static **/
/** Constructor **/

Tokenization::Tokenization() {

}

Tokenization::Tokenization(Tokenization const &) {

}

/** Public **/

void Tokenization::evaluateArgument(std::string &s) {
	std::stack<char> stack;
	stack.push('N');
	std::cout << "Infix token : ";
	for (; !s.empty();) {
		if (isOpeningParanthesis(s[0])) {
			std::cout << "OpenPar('(') ";
			stack.push(s[0]);
			s = s.substr(1, s.size());
		} else if (isWhiteSpace(s[0])) {
			s = s.substr(1, s.size());
		} else if (isNumber(s[0])) {
			for (int index = 0;; ++index) {
				if (!std::isdigit(s[index])) {
					token_nu.push_back(new IsNumber(s.substr(0, index)));
					std::cout << "Nu(" << token_nu.back()->getValue() << ") ";

					s = s.substr(index, s.size());
					break;
				}
			}
		} else if (isOperator(s[0])) {
			std::cout << "Op(" << s[0] << ") ";
			while (stack.top() != 'N' &&
				   isOperator(s[0]) <= isOperator(stack.top())) {
				std::string op;
				op += stack.top();
				stack.pop();
				token_nu.push_back(new IsOperator(op));
			}
			stack.push(s[0]);
			s = s.substr(1, s.size());
		} else if (isClosingParanthesis(s[0])) {
			std::cout << "ClosePar(')') ";
			while (stack.top() != 'N' && stack.top() != '(') {
				std::string op;
				op += stack.top();
				stack.pop();
				token_nu.push_back(new IsOperator(op));
			}
			if (stack.top() == '(') {
				stack.pop();
			}
			s = s.substr(1, s.size());
		} else {
		}
	}

	//Pop all the remaining elements from the stack
	while (stack.top() != 'N') {
		std::string op;
		op += stack.top();
		stack.pop();
		token_nu.push_back(new IsOperator(op));
	}
	std::cout << std::endl;

}

void Tokenization::evaluatePostFix() {
	//Num(3) | OP Push | ST 3
	std::stack<IToken *> stack_evaluation;
	IToken *iToken;

	for (; !token_nu.empty();) {
		iToken = token_nu.front();
		std::cout << iToken->toString() << "\t|  ";
		iToken->execute(stack_evaluation);
		token_nu.pop_front();
		std::cout << "\t|  ";
		printStack(stack_evaluation);
	}
}

/** Private **/
void Tokenization::printStack(std::stack<IToken *> st) {
	IToken *iToken;
	std::cout << "[ ST ";
	for (; !st.empty();) {
		iToken = st.top();
		st.pop();
		std::cout << iToken->getValue() << " ";
	}
	std::cout << "]" << std::endl;
}

void Tokenization::printPostFix() {
	std::cout << std::endl;
	std::cout << "Postfix token : ";
	std::deque<IToken *> token_nu_bis = token_nu;
	for (; !token_nu_bis.empty();) {
		std::cout << token_nu_bis.front()->toString();
		token_nu_bis.pop_front();
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

bool Tokenization::isClosingParanthesis(char p) {
	return (p == ')');
}

bool Tokenization::isOpeningParanthesis(char p) {
	return (p == '(');
}

int Tokenization::isOperator(char op) {
	switch (op) {
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		default:
			break;
	}
	return 0;
}


bool Tokenization::isNumber(char nu) {
	return ((nu >= '0' && nu <= '9') || nu == '.');
}

bool Tokenization::isWhiteSpace(char w) {
	return (w == ' ' || w == '	');
}

/** Operator **/

Tokenization &Tokenization::operator=(Tokenization const &) {
	return *this;
}

/** Destructor **/

Tokenization::~Tokenization() {

}




