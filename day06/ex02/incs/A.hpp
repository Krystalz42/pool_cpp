//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX02_A_HPP
#define EX02_A_HPP

#include "Base.hpp"

class A : virtual public Base {
public:
	A();
	A(A const &a);
	A &operator=(A const &a);
	~A();
};

#endif //EX02_A_HPP
