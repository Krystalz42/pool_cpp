//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Bureaucrat.hpp>
#include <iostream>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>

int main() {
	srand((unsigned) time(nullptr));
	Bureaucrat jeff = Bureaucrat("Jeff", 100);
	Bureaucrat alex = Bureaucrat("Alex", 1);

	PresidentialPardonForm ppf = PresidentialPardonForm("Joey Star");
	ShrubberyCreationForm scg = ShrubberyCreationForm("tree");
	RobotomyRequestForm rrf = RobotomyRequestForm("Kool Shen");

	alex.signForm(ppf);
	alex.signForm(scg);
	alex.signForm(rrf);

	jeff.executeForm(ppf);
	jeff.executeForm(scg);
	jeff.executeForm(rrf);

	alex.executeForm(ppf);
	alex.executeForm(scg);
	alex.executeForm(rrf);
}