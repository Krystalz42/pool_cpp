//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX03_IEXECUTE_HPP
#define EX03_IEXECUTE_HPP

#include <vector>
#include <list>

class IExecute {
public:
	virtual void	execute(std::list<char> *, std::list<char>::iterator *it) const = 0;
	virtual ~IExecute() {};

};

#endif //EX03_IEXECUTE_HPP
