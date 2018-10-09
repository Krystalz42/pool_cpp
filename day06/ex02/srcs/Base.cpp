//
// Created by Alexandre ROULIN on 09/10/2018.
//

#include <Base.hpp>

#include "../incs/Base.hpp"

Base::Base() {

}

Base::~Base() {

}

Base::Base(Base const &b) {
	*this = b;
}

Base &Base::operator=(Base const &b) {
	if (this != &b) {

	}
	return *this;
}
