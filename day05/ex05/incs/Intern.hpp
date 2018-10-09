//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern {
public:

	static std::string const PRESIDENTIAL_PARDON_FORM;
	static std::string const ROBOTOMY_REQUEST_FORM;
	static std::string const SHRUBBERY_CREATION_FORM;

	static std::string getRandomForm();

	Intern();
	~Intern();
	Intern(Intern const &i);
	Intern &operator=(Intern const &i);
	Form *makeForm(std::string name_form, std::string target);
};

#endif //EX03_INTERN_HPP
