//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX00_ROBOTOMYREQUESTFORM_HPP
#define EX00_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

/*
//       _-_
//    /~~   ~~\
// /~~         ~~\
//{               }
// \  _-     -_  /
//   ~  \\ //  ~
//_- -   | | _- _
//  _ -  | |   -_
//      // \\
*/

class RobotomyRequestForm: public Form {
private:
	std::string			_target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string		target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &s);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &s);

	virtual void execute(Bureaucrat const &executor) const;
};


#endif //EX00_ROBOTOMYREQUESTFORM_HPP
