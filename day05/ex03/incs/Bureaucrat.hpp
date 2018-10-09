//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

class Form;
#include <string>
#include <ostream>
#include "Form.hpp"

class Bureaucrat {

public:
	Bureaucrat(std::string name, unsigned int grade);

	Bureaucrat(Bureaucrat const &i);

	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &i);

	const std::string &getName() const;

	unsigned int getGrade() const;

	void executeForm(Form const & form);

	void incrementGrade();

	void decrementGrade();

	void signForm(Form &form) const;

	class GradeTooHighException : public std::exception {

	public:
		GradeTooHighException() throw();

		GradeTooHighException(GradeTooHighException const &g);

		GradeTooHighException &operator=(GradeTooHighException const &g);
		virtual ~GradeTooHighException() throw();

		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &g);

		GradeTooLowException &operator=(GradeTooLowException const &g);
		virtual ~GradeTooLowException() throw();

		virtual const char *what() const throw();

	};

private:

	std::string const _name;
	unsigned int _grade;
	Bureaucrat();

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif //EX00_BUREAUCRAT_HPP
