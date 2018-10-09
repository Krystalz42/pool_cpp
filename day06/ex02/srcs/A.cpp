//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <A.hpp>

#include "../incs/A.hpp"

A::A() {

}

A::~A() {

}

A::A(A const &a) {
	*this = a;
}

A &A::operator=(A const &a) {
	if (this != &a) {
	}
	return *this;
}
