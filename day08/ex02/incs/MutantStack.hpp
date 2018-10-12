//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <iostream>
#include <unistd.h>
template <typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>(void): std::stack<T>() {};
	MutantStack<T>(MutantStack const & ref): std::stack<T>(ref) {};
	virtual ~MutantStack<T>(void) {};

	iterator    begin(void)
	{
		return std::stack<T>::c.begin();
	};

	iterator    end(void)
	{
		return std::stack<T>::c.end();
	};
};

#endif