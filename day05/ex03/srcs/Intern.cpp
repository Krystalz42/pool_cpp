//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

/** Static **/

std::string const Intern::PRESIDENTIAL_PARDON_FORM = "PRESIDENTIAL_PARDON_FORM";
std::string const Intern::ROBOTOMY_REQUEST_FORM = "ROBOTOMY_REQUEST_FORM";
std::string const Intern::SHRUBBERY_CREATION_FORM = "SHRUBBERY_CREATION_FORM";

/** Constructor **/

Intern::Intern() {

}

Intern::Intern(Intern const &i) {
	*this = i;
}

/** Public **/


Form *Intern::makeForm(std::string name_form, std::string target) {
	if (name_form == PRESIDENTIAL_PARDON_FORM)
		return new PresidentialPardonForm(target);
	if (name_form == ROBOTOMY_REQUEST_FORM)
		return new RobotomyRequestForm(target);
	if (name_form == SHRUBBERY_CREATION_FORM)
		return new ShrubberyCreationForm(target);
	return 0;
}

/** Private **/
/** Operator **/
Intern &Intern::operator=(Intern const &) {
	return *this;
}

/** Destructor **/


Intern::~Intern() {

}




