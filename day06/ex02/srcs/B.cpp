//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <B.hpp>

#include "B.hpp"

B::B() {

}

B::~B() {

}

B::B(B const &b) {
	*this = b;
}

B &B::operator=(B const &b) {
	if (this != &b) {

	}
	return *this;
}
