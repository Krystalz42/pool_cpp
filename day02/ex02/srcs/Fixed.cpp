#include <Fixed.hpp>
#include <iostream>
#include <math.h>

/** Static **/

int const Fixed::_padding = 8;

/** Constructor **/

Fixed::Fixed() : _rawBits(0)
{
}

Fixed::Fixed(int const &f) : _rawBits(f)
{
	setRawBits(f << _padding);
}

Fixed::Fixed(float const &f)
{
	setRawBits((int)roundf(f * (1 << _padding)));
}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
}

/** Private **/

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2) {
	return f1.getRawBits() > f2.getRawBits() ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	return f1.getRawBits() > f2.getRawBits() ? f1 : f2;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2) {
	return f1.getRawBits() < f2.getRawBits() ? f1 : f2;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	return f1.getRawBits() < f2.getRawBits() ? f1 : f2;
}


Fixed &Fixed::operator=(Fixed const &f) {
	if (&f != this)
		_rawBits = f.getRawBits();
	return *this;
}

float Fixed::toFloat() const {
	return ((float)getRawBits() / (1 << _padding));
}

int Fixed::toInt() const {
	return (getRawBits() >> _padding);
}


bool Fixed::operator==(const Fixed &rhs) const {
	return _rawBits == rhs._rawBits;
}


bool Fixed::operator<(const Fixed &rhs) const {
	return _rawBits < rhs._rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const {
	return  _rawBits > rhs._rawBits;
}

bool Fixed::operator!=(const Fixed &rhs) const {
	return _rawBits != rhs._rawBits;
}

bool Fixed::operator<=(const Fixed &rhs) const {
	return _rawBits <= rhs._rawBits;
}

bool Fixed::operator>=(const Fixed &rhs) const {
	return _rawBits >= rhs._rawBits;
}


Fixed Fixed::operator+(Fixed const &f1) const {
	return Fixed(this->toFloat() + f1.toFloat());
}

Fixed Fixed::operator/(Fixed const &f1) const {
	return Fixed(this->toFloat() / f1.toFloat());
}

Fixed Fixed::operator*(Fixed const &f1) const {
	return Fixed(this->toFloat() * f1.toFloat());
}

Fixed Fixed::operator-(Fixed const &f1) const {
	return Fixed(this->toFloat() - f1.toFloat());
}

Fixed const Fixed::operator++(int value) {
	Fixed temp(*this);
	(void)value;
	_rawBits++;
	return temp;
}

Fixed Fixed::operator++() {
	_rawBits++;
	return *this;
}

Fixed const Fixed::operator--(int value) {
	Fixed temp(*this);
	(void)value;
	_rawBits--;
	return temp;
}

Fixed Fixed::operator--() {
	_rawBits--;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits() const {
	return _rawBits;
}
void Fixed::setRawBits(int const raw) {
	_rawBits = raw;
}

/** Private **/

/** Destructor **/

Fixed::~Fixed() {
}
