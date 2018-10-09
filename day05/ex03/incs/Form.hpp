//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_FORM_HPP
#define EX00_FORM_HPP

class Bureaucrat;

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const _name;
	unsigned int const _grade_requirement_sign;
	unsigned int const _grade_requirement_exec;
	bool _sign;

	Form();

protected:
	bool canBeExecute(Bureaucrat const&executor) const;

public:
	Form(
			const std::string &_name,
			unsigned int const grade_requirement_sign,
			unsigned int const grade_requirement_exec);

	virtual ~Form();

	Form(Form const &form);

	Form &operator=(Form const &form);

	void beSigned(Bureaucrat const &bureaucrat);

	bool isSign() const;

	const std::string &getName() const;

	unsigned int getGradeRequirementSign() const;

	unsigned int getGradeRequirementExec() const;


	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception {

	public:
		GradeTooHighException() throw();

		virtual ~GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const &g);

		GradeTooHighException &operator=(GradeTooHighException const &g);
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
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX00_FORM_HPP
