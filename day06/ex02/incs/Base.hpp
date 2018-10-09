//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX02_BASE_HPP
#define EX02_BASE_HPP

class Base {
public:
	Base();
	virtual ~Base();
	Base(Base const &b);
	Base &operator=(Base const &b);
};

#endif //EX02_BASE_HPP
