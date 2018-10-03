#include <Fixed.hpp>
#include <iostream>
#include <math.h>

/** Static **/

int const Fixed::_nu = 8;

/** Constructor **/

Fixed::Fixed() : _f(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const &f) : _f(f)
{
	std::cout << "Constructor by integer called" << std::endl;
	setRawBits(f << this->_nu);
}

Fixed::Fixed(float const &f)
{
	std::cout << "Constructor by float called" << std::endl;
	setRawBits((int)roundf(f * (1 << _nu)));
}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
	std::cout << "Constructor by copy called" << std::endl;
}

/** Public **/

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return os;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	if (&f != this)
		_f = f.getRawBits();
	std::cout << "Constructor by assignation called" << std::endl;
	return *this;
}

float Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << _nu));
}

int Fixed::toInt() const
{
	return (getRawBits() >> _nu);
}

int Fixed::getRawBits(void) const
{
	return _f;
}
void Fixed::setRawBits(int const raw)
{
	_f = raw;
}
/** Private **/

/** Destructor **/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
