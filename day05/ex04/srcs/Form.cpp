//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Form.hpp>
#include <iostream>

/** Static **/
/** Constructor **/
Form::Form() : _name(""), _grade_requirement_sign(1),
			   _grade_requirement_exec(1) {

}



Form::Form(std::string const &_name,
		   unsigned int const _grade_requirement_sign,
		   unsigned int const _grade_requirement_exec) :
		_name(_name),
		_grade_requirement_sign(_grade_requirement_sign),
		_grade_requirement_exec(_grade_requirement_exec) {

	if (_grade_requirement_sign < 1 || _grade_requirement_exec < 1) {
		throw GradeTooHighException();
	} else if (_grade_requirement_sign > 150 || _grade_requirement_exec > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(Form const &form) :
		_name(form.getName()),
		_grade_requirement_sign(form.getGradeRequirementSign()),
		_grade_requirement_exec(form.getGradeRequirementExec()),
		_sign(form.isSign()) {

	if (_grade_requirement_sign < 1 || _grade_requirement_exec < 1) {
		throw GradeTooHighException();
	} else if (_grade_requirement_sign > 150 || _grade_requirement_exec > 150) {
		throw GradeTooLowException();
	}
}
/** Public **/

bool Form::canBeExecute(Bureaucrat const &executor) const {
	return (executor.getGrade() <= _grade_requirement_exec);
}


void Form::beSigned(Bureaucrat const &bureaucrat) {
	if(bureaucrat.getGrade() > _grade_requirement_sign)
		throw GradeTooLowException();
	_sign = true;
}

const std::string &Form::getName() const {
	return _name;
}

unsigned int Form::getGradeRequirementSign() const {
	return _grade_requirement_sign;
}

unsigned int Form::getGradeRequirementExec() const  {
	return _grade_requirement_exec;
}

bool Form::isSign() const {
	return _sign;
}

/** Private **/
/** Operator **/

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os
			<< form.getName()
			<< " with "
			<< form.getGradeRequirementExec()
			<< " grade for exec and "
			<< form.getGradeRequirementExec()
			<< " grade for sign."
			<< std::endl;
	return os;
}

Form &Form::operator=(Form const &form) {
	if (this != &form) {
		this->_sign = form.isSign();
	}
	return *this;
}

/** Exception **/

Form::GradeTooHighException::GradeTooHighException() throw() {

}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

Form::GradeTooHighException::GradeTooHighException(
		const Form::GradeTooHighException &g) {
	*this = g;

}

Form::GradeTooHighException &
Form::GradeTooHighException::operator=(const Form::GradeTooHighException &g) {
	if (this != &g) {

	}
	return *this;
}

Form::GradeTooLowException::GradeTooLowException() throw() {

}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

Form::GradeTooLowException::GradeTooLowException(
		const Form::GradeTooLowException &g) {
	*this = g;

}

Form::GradeTooLowException &
Form::GradeTooLowException::operator=(const Form::GradeTooLowException &g) {
	if (this != &g) {

	}
	return *this;
}

/** Destructor **/



Form::~Form() {

}







