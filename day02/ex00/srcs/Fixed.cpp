#include <Fixed.hpp>
#include <iostream>

/** Static **/

int const Fixed::_nu = 8;

/** Constructor **/

Fixed::Fixed() :
	_raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const & f) :
	_raw(f) {
	std::cout << "Constructor by integer called" << std::endl;
}
Fixed::Fixed(Fixed const & f) {
	*this = f;
	std::cout << "Constructor by copy called" << std::endl;
}

/** Public **/

std::ostream & operator<<(std::ostream & os, Fixed & f) {
	os << f.getRawBits();
	return os;
}

Fixed Fixed::operator+(Fixed const & f) {
	return Fixed( this->_raw + f.getRawBits());
}

Fixed & Fixed::operator=(Fixed const &f) {
	this->_raw = f.getRawBits();

	std::cout << "Constructor by assignation called" << std::endl;
	return *this;
}



int Fixed::getRawBits(void) const {
	return _raw;
} 
void Fixed::setRawBits(int const raw) {
	_raw = raw;
}
/** Private **/

/** Destructor **/

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
