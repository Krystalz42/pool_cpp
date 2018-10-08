//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_PRESIDENTIALPARDONFORM_HPP
#define EX00_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
	std::string 		_target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &s);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &s);

	virtual void execute(Bureaucrat const &executor) const;

};


#endif //EX00_PRESIDENTIALPARDONFORM_HPP
