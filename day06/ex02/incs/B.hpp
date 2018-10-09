//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX02_B_HPP
#define EX02_B_HPP

#include <Base.hpp>

class B : virtual public Base {
public:
	B();
	~B();
	B(B const &b);
	B &operator=(B const &b);
};

#endif //EX02_B_HPP
