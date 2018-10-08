//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <RobotomyRequestForm.hpp>
#include <iostream>

#include "RobotomyRequestForm.hpp"




/** Static **/
/** Constructor **/

RobotomyRequestForm::RobotomyRequestForm() :
	Form("Robotomy", 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("Robotomy", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &s) :
		Form(s.getName(),
			 s.getGradeRequirementSign(),
			 s.getGradeRequirementExec()) {
	*this = s;
}
/** Public **/

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!isSign()) {
		std::cout << getName() << " has not been signed" << std::endl;
		return;
	}
	if (!Form::canBeExecute(executor))
		throw GradeTooLowException();
	if (rand() % 2 == 0) {
		system("afplay ./sound/robot.mp3 &");
		std::cout << _target << " has been robotomized." << std::endl;
	} else {
		std::cout << "It's a failure !" << std::endl;
	}
}

/** Private **/
/** Operator **/

RobotomyRequestForm &
RobotomyRequestForm::operator=(RobotomyRequestForm const &s) {
	if (this != &s) {

	}
	return *this;
}

/** Destructor **/




RobotomyRequestForm::~RobotomyRequestForm() {

}






