//
// Created by Alexandre ROULIN on 12/10/2018.
//

#include <iostream>
#include <IsNumber.hpp>

/** Static **/
/** Constructor **/

IsNumber::IsNumber() {

}

IsNumber::IsNumber(const std::string &nu) : nu(nu) {

}

IsNumber::IsNumber(IsNumber const &) {

}

/** Public **/
void IsNumber::execute(std::stack<IToken *> &st) const {
	st.push(new IsNumber(nu));
	std::cout << "Push";
}

std::string IsNumber::toString() const {
	std::string s;
	s += "Nu(";
	s += nu;
	s += ") ";
	return s;
}

const std::string &IsNumber::getValue() const {
	return nu;
}
/** Private **/
/** Operator **/
IsNumber &IsNumber::operator=(IsNumber const &) {
	return *this;
}

/** Destructor **/

IsNumber::~IsNumber() {

}



