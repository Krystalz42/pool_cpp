//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <iostream>
#include <OfficeBlock.hpp>

#include "OfficeBlock.hpp"

/** Static **/
/** Constructor **/

OfficeBlock::OfficeBlock() : _signing_b(nullptr), _executing_b(nullptr),
							 _intern(nullptr) {


}

OfficeBlock::OfficeBlock(
		Bureaucrat &_signing_b,
		Bureaucrat &_executing_b,
		Intern &_intern) :
		_signing_b(&_signing_b),
		_executing_b(&_executing_b),
		_intern(&_intern) {

}

OfficeBlock::OfficeBlock(OfficeBlock const &ob)
		: _signing_b(nullptr), _executing_b(nullptr), _intern(nullptr) {
	(void) ob;
}

/** Public **/

void
OfficeBlock::doBureaucracy(std::string const form, std::string const target) {

	if (_intern == nullptr) {
		throw MissingEmployee("There is no intern set ");
	}
	if (_signing_b == nullptr) {
		throw MissingEmployee("There is no signin bureaucrat set ");
	}
	if (_executing_b == nullptr) {
		throw MissingEmployee("There is no executing bureaucrat set ");
	}
	Form *f = _intern->makeForm(form, target);
	if (f != nullptr) {
		_signing_b->signForm(*f);
		_executing_b->executeForm(*f);
	} else {
		std::cout << "Form badly setted." << std::endl;
	}
}

void OfficeBlock::setSigner(Bureaucrat &signing_b) {
	_signing_b = &signing_b;
}

void OfficeBlock::setExecutor(Bureaucrat &executing_b) {
	_executing_b = &executing_b;
}

void OfficeBlock::setIntern(Intern &intern) {
	_intern = &intern;
}

/** Private **/
/** Operator **/

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &ob) {
	(void) ob;
	return *this;
}

/** Destructor **/

OfficeBlock::~OfficeBlock() {

}


const char *OfficeBlock::MissingEmployee::what() const throw() {
	return _what.c_str();
}

OfficeBlock::MissingEmployee::MissingEmployee() throw(): _what(NULL) {

}

OfficeBlock::MissingEmployee::MissingEmployee(
		const OfficeBlock::MissingEmployee &) throw(): _what(NULL) {

}

OfficeBlock::MissingEmployee &
OfficeBlock::MissingEmployee::operator=(
		const OfficeBlock::MissingEmployee &) throw() {
	return *this;
}

OfficeBlock::MissingEmployee::~MissingEmployee() throw() {

}

OfficeBlock::MissingEmployee::MissingEmployee(std::string  message) throw() : _what(
		message) {

}
