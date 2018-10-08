//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <PresidentialPardonForm.hpp>
#include <iostream>

#include "PresidentialPardonForm.hpp"



/** Static **/
/** Constructor **/

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25, 5), _target(target) {

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &s) :
		Form(s.getName(),
			 s.getGradeRequirementSign(),
			 s.getGradeRequirementExec()) {
	*this = s;
}
/** Public **/

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!isSign()) {
		std::cout << getName() << " has not been signed" << std::endl;
		return;
	}
	if (!Form::canBeExecute(executor))
		throw GradeTooLowException();
	std::cout << _target << " as been pardoned by Zaphod Beeblebrox." << std::endl;
}

/** Private **/
/** Operator **/

PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const &s) {
	if (this != &s) {

	}
	return *this;
}

/** Destructor **/




PresidentialPardonForm::~PresidentialPardonForm() {

}






