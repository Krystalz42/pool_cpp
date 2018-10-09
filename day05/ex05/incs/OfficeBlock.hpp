//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_OFFICEBLOCK_HPP
#define EX00_OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock {
private:
	Bureaucrat *_signing_b;
	Bureaucrat *_executing_b;
	Intern *_intern;

	OfficeBlock &operator=(OfficeBlock const &ob);

public:
	Bureaucrat *getSigner() const;

	Bureaucrat *getExecutor() const;

	Intern *getIntern() const;


	OfficeBlock();

	OfficeBlock(Bureaucrat &_signing_b, Bureaucrat &_executing_b,
				Intern &_intern);

	void setSigner(Bureaucrat &_signing_b);

	void setExecutor(Bureaucrat &_executing_b);

	void setIntern(Intern &_intern);


	~OfficeBlock();


	void doBureaucracy(std::string form, std::string target);

	class MissingEmployee : public std::exception {
	private:
		std::string const _what;

		MissingEmployee() throw();

		MissingEmployee &operator=(MissingEmployee const &) throw();

	public:
		MissingEmployee(std::string message) throw();

		~MissingEmployee() throw();


		virtual const char *what() const throw();

		MissingEmployee(MissingEmployee const &) throw();
	};

	OfficeBlock(OfficeBlock const &c);
};

#endif //EX00_OFFICEBLOCK_HPP
