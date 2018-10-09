//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_SHRUBBERYCREATIONFORM_HPP
#define EX00_SHRUBBERYCREATIONFORM_HPP



#include "Form.hpp"

class ShrubberyCreationForm: public Form {
private:
	std::string			_target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &s);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &s);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif //EX00_SHRUBBERYCREATIONFORM_HPP
