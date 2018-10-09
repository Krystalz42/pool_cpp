//
// Created by Alexandre ROULIN on 08/10/2018.
//

#ifndef EX05_CENTRALBUREAUCRACY_HPP
#define EX05_CENTRALBUREAUCRACY_HPP

#include "OfficeBlock.hpp"

class CentralBureaucracy {
private:
	OfficeBlock _ob[20];
	Intern i[20];
	std::string	_target[20];
	bool officeReady(OfficeBlock &  block);
public:
	CentralBureaucracy();
	~CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy const &c);
	CentralBureaucracy &operator=(CentralBureaucracy const &c);
	void doBureaucracy();
	void queueUp(std::string target);
	void feedSigner(Bureaucrat  b);
	void feedExecutor(Bureaucrat  b);
};

#endif //EX05_CENTRALBUREAUCRACY_HPP
