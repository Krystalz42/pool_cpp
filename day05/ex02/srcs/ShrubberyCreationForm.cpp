//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <ShrubberyCreationForm.hpp>
#include <fstream>
#include <iostream>

#include "ShrubberyCreationForm.hpp"



/** Static **/
/** Constructor **/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery", 145, 137) , _target(target) {

}



ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s) :
		Form(s.getName(),
			 s.getGradeRequirementSign(),
			 s.getGradeRequirementExec()) {
	*this = s;
}
/** Public **/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!isSign()) {
		std::cout << getName() << " has not been signed" << std::endl;
		return;
	}
	if (!Form::canBeExecute(executor))
		throw GradeTooLowException();

	std::ofstream		file(executor.getName() + "_shrubbery");
	if (file.is_open()) {
		std::cout << "Write tree in " << executor.getName() + "_shrubbery." << std::endl;
	} else {
		std::cout << "Can't open " << executor.getName() + "_shrubbery." << std::endl;
	}
	file << "       _-_\n"
			"    /~~   ~~\\\n"
			" /~~         ~~\\\n"
			"{               }\n"
			" \\  _-     -_  /\n"
			"   ~  \\\\ //  ~\n"
			"_- -   | | _- _\n"
			"  _ -  | |   -_\n"
			"      // \\\\" << std::endl;
	file.close();
}

/** Private **/
/** Operator **/

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s) {
	if (this != &s) {

	}
	return *this;
}

/** Destructor **/




ShrubberyCreationForm::~ShrubberyCreationForm() {

}