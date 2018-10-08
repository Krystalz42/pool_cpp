//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Bureaucrat.hpp>
#include <iostream>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <Intern.hpp>

int main() {
	Bureaucrat alex = Bureaucrat("Alex", 1);
	Intern stagiare = Intern();

	Form *f1 = stagiare.makeForm(Intern::PRESIDENTIAL_PARDON_FORM, "Riri");
	Form *f2 = stagiare.makeForm(Intern::ROBOTOMY_REQUEST_FORM, "Fifi");
	Form *f3 = stagiare.makeForm(Intern::SHRUBBERY_CREATION_FORM, "Loulou");

	alex.signForm(*f1);
	alex.signForm(*f2);
	alex.signForm(*f3);

	alex.executeForm(*f1);
	alex.executeForm(*f2);
	alex.executeForm(*f3);

	delete f1;
	delete f2;
	delete f3;
}