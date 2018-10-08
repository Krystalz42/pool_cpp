//
// Created by Alexandre ROULIN on 08/10/2018.
//

#include <Bureaucrat.hpp>
#include <iostream>

int main() {
	Bureaucrat 	*jeff = 0;

	try {
		jeff = new Bureaucrat("Jeff", 155);
	} catch  (std::exception &e) {
		jeff = new Bureaucrat("Jeff", 150);

	}
	Bureaucrat alex = Bureaucrat("Alex", 10);
	Form	dl = Form("Driver's License", 40, 150);
	Form	dlc = Form( dl );
	try {
		Form	sign_failed = Form("Driver's License", 0, 150);
		std::cout << "Impossible Form was created." << std::endl;
	} catch (std::exception &e) {
		std::cout << "You're doing bullshit." << std::endl;
	}
	try {
		Form	exec_failed = Form("Driver's License", 1, 151);
		std::cout << "Impossible Form was created." << std::endl;
	} catch (std::exception &e) {
		std::cout << "You're doing bullshit." << std::endl;
	}


	jeff->signForm(dlc);
	alex.signForm(dl);
	jeff->signForm(dl);
	alex.signForm(dl);
}
