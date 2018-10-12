//
// Created by Alexandre ROULIN on 12/10/2018.
//

#include <iostream>
#include <IsNumber.hpp>
#include <IsOperator.hpp>

#include "IsOperator.hpp"

IsOperator::IsOperator() {

}
IsOperator::IsOperator(const std::string &op) : op(op) {
}

IsOperator::IsOperator(IsOperator const &) {

}

/** Public **/
void IsOperator::execute(std::stack<IToken *> &st) const {
	if (st.size() <= 1) {
		exit(1);
	}
	IsNumber *nu1 = dynamic_cast<IsNumber *>(st.top());
	st.pop();
	IsNumber *nu2 = dynamic_cast<IsNumber *>(st.top());
	st.pop();
	int v = doOperationAndPrint(stoi(nu1->getValue()), stoi(nu2->getValue()));
	st.push(new IsNumber(std::to_string(v)));
	delete nu1;
	delete nu2;;
}

std::string IsOperator::toString() const {
	std::string s;
	s += "Op(";
	s += op;
	s += ") ";
	return s;
}

const std::string &IsOperator::getValue() const {
	return op;
}
/** Private **/


int IsOperator::doOperationAndPrint(int nu1, int nu2) const {
	switch (op[0]) {
		case '*':
			std::cout << "Mlt";
			return nu1 * nu2;
		case '/':
			std::cout << "Dvd";
			return nu1 / nu2;
		case '+':
			std::cout << "Add";
			return nu1 + nu2;
		case '-':
			std::cout << "Sub";
			return nu1 - nu2;
		default:
			break;
	}
	return 0;
}


/** Operator **/
IsOperator &IsOperator::operator=(IsOperator const &) {
	return *this;
}

/** Destructor **/

IsOperator::~IsOperator() {

}


