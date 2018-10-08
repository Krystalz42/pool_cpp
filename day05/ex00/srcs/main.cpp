//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Bureaucrat.hpp>
#include <iostream>

int main() {
	Bureaucrat *alex = 0;
	try {
		alex  = new Bureaucrat("Alex", 155);
	}catch (std::exception &e) {
		std::cout << "Throw in creation" << std::endl;
		alex = new Bureaucrat("Alex", 150);
	}

	std::cout << *alex << std::endl;
	std::cout << "Catch by std::exception of decrementGrade" << std::endl;
	try {
		alex->decrementGrade();
	} catch (std::exception &e) {
		std::cout << "By exception" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException  &e) {
		std::cout << "By Bureaucrat" << std::endl;
		std::cout << e.what() << std::endl;
	}


	std::cout << "Catch by Bureaucrat::GradeTooLowException of decrementGrade" << std::endl;
	try {
		alex->decrementGrade();
	} catch (Bureaucrat::GradeTooLowException  &e) {
		std::cout << "By Bureaucrat" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception &e) {
		std::cout << "By exception" << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat roger = Bureaucrat("Roger", 0);
	}catch (std::exception &e) {
		std::cout << "Throw in creation" << std::endl;
		Bureaucrat roger = Bureaucrat("Roger", 1);
	}

	Bureaucrat *roger = 0;
	try {
		roger  = new Bureaucrat("Roger", 1);
	}catch (std::exception &e) {
		std::cout << "Throw in creation" << std::endl;
		roger = new Bureaucrat("Roger", 0);
	}
	std::cout << *roger << std::endl;
	std::cout << "Catch by std::exception of incrementGrade" << std::endl;
	try {
		roger->incrementGrade();
	} catch (std::exception &e) {
		std::cout << "By exception" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooHighException  &e) {
		std::cout << "By Bureaucrat" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << "Catch by Bureaucrat::GradeTooHighException of incrementGrade" << std::endl;

	try {
		roger->incrementGrade();
	} catch (Bureaucrat::GradeTooHighException  &e) {
		std::cout << "By Bureaucrat" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception &e) {
		std::cout << "By exception" << std::endl;
		std::cout << e.what() << std::endl;
	}
	delete roger;
	delete alex;
}