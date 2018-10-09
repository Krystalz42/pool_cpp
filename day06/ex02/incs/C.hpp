//
// Created by Alexandre ROULIN on 09/10/2018.
//

#ifndef EX02_C_HPP
#define EX02_C_HPP

#include "Base.hpp"

class C : virtual public Base {
public:
	C();
	C(C const &b);
	C &operator=(C const &b);
	~C();
};
#endif //EX02_C_HPP
