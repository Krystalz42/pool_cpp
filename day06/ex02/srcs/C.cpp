//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <C.hpp>

#include "C.hpp"

C::C() {

}

C::C(C const &b) {
	*this = b;
}

C &C::operator=(C const &b) {
	if (this != &b) {
	}
	return *this;
}

C::~C() {

}
