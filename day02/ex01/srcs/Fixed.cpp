#include <Fixed.hpp>
#include <iostream>
#include <iostream>
#include <bitset>

void floatToBinary(float f)
{
    union
    {
         float input;   // assumes sizeof(float) == sizeof(int)
         int   output;
    }    data;

    data.input = f;

    std::bitset<sizeof(float) * CHAR_BIT>   bits(data.output);


    std::cout << bits << std::endl;
}
/** Static **/
std::string intToBinary(int n)
{
    std::string r;
    while (n!=0) {
		r=(n%2==0 ?"0":"1")+r;
		n/=2;
		}
    return r;
}

int const Fixed::_nu = 8;

/** Constructor **/

Fixed::Fixed() :
	_f(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const & f) :
	_f(f) {
	std::cout << intToBinary(f) << std::endl;
	std::cout << "Constructor by integer called" << std::endl;
	setRawBits(f << this->_nu);
}

Fixed::Fixed(float const & f) {
	floatToBinary(f);
	std::cout << "Constructor by float called" << std::endl;
}

Fixed::Fixed(Fixed const & f) {
	*this = f;
	std::cout << "Constructor by copy called" << std::endl;
}

/** Public **/

std::ostream & operator<<(std::ostream & os, Fixed & f) {
	os << f.toFloat();
	return os;
}

Fixed Fixed::operator+(Fixed const & f) {
	return Fixed( this->_f + f.getRawBits());
}

Fixed & Fixed::operator=(Fixed const &f) {
	this->_f = f.getRawBits();

	std::cout << "Constructor by assignation called" << std::endl;
	return *this;
}

float Fixed::toFloat() {
	return ((float)getRawBits() / (1 << this->_nu));
}

int Fixed::toInt() {
	return 0;
}

int Fixed::getRawBits(void) const {
	return _f;
} 
void Fixed::setRawBits(int const raw) {
	std::cout << raw << std::endl;
	_f = raw;
}
/** Private **/

/** Destructor **/

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
