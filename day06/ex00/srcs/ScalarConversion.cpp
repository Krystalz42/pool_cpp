#include <utility>

//
// Created by Alexandre ROULIN on 09/10/2018.
//
//char: Non displayable
//int: 0
//float: 0.0f
//double: 0.0

#include <ScalarConversion.hpp>
#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

#include "ScalarConversion.hpp"

/** Static **/
/** Constructor **/

ScalarConversion::ScalarConversion() {
}

ScalarConversion::ScalarConversion(std::string input) {
	_d = atof(input.c_str());
	_s = input;
	checkConvertToChar();
	checkConvertToInt();
	checkConvertToFloat();
	checkConvertToDouble();
}

ScalarConversion::ScalarConversion(ScalarConversion const &sc) {
	*this = sc;
}

/** Public **/

void ScalarConversion::checkConvertToChar() {
	char c;
	try {
		c = convertToChar();
		std::cout << "char : '" << c << "'" << std::endl;
	} catch (ConversionError &e) {
		std::cout << "char : " << e.what() << std::endl;
	}

}

char ScalarConversion::convertToChar() {
	if (_d == 0 && !std::isdigit(_s[0])) {
		char c = static_cast<char>(_s[0]);
		if (_s.size() != 1)
			throw ConversionError("impossible");
		if (isprint(c))
			return c;
		throw ConversionError("non displayable");
	} else {
		char c = static_cast<char>(_d);
		if (isprint(c))
			return c;
		else if (isnan(_d))
			throw ConversionError("impossible ");
		else
			throw ConversionError("non displayable");
	}
}

void ScalarConversion::checkConvertToInt() {
	int i;
	try {
		i = convertToInt();
		std::cout << "int : " << i << std::endl;
	} catch (ConversionError &e) {
		std::cout << "int : " << e.what() << std::endl;
	}
}

int ScalarConversion::convertToInt() {
	if (_d == 0 && std::isdigit(_s[0])) {
		return static_cast<int>(_d);
	} else if (_d == 0 && !std::isdigit(_s[0]) && _s.size() == 1) {
		return static_cast<int>(_s[0]);
	} else {
		if (isnan(_d) || !std::isdigit(_s[0]))
			throw ConversionError("impossible ");
	}
	return static_cast<int>(_d);
}

void ScalarConversion::checkConvertToFloat() {
	float f;
	try {
		f = convertToFLoat();
		std::cout << "float : "
				  << std::setprecision(getPrecision())
				  << std::fixed
				  << f
				  << "f" << std::endl;
	} catch (ConversionError &e) {
		std::cout << "float : " << e.what() << std::endl;
	}
}

float ScalarConversion::convertToFLoat() {
	if (isinf(_d))
		throw ConversionError((_d < 0 ? "-inff" : "+inff"));
	else if (isnan(_d))
		throw ConversionError("nanf");
	else if (_s.size() == 1 && _d == 0 && !isdigit(_s[0]))
		return static_cast<float>(_s[0]);
	else if (!std::isdigit(_s[0]))
		throw ConversionError("impossible ");
	return static_cast<float>(_d);
}

void ScalarConversion::checkConvertToDouble() {
	double d;
	try {
		d = convertToDouble();
		std::cout << "double : "
				  << std::setprecision(getPrecision())
				  << std::fixed
				  << d << std::endl;

	} catch (ConversionError &e) {
		std::cout << "double : " << e.what() << std::endl;

	}

}

double ScalarConversion::convertToDouble() {
	if (isinf(_d))
		throw ConversionError((_d < 0 ? "-inf" : "+inf"));
	else if (isnan(_d))
		throw ConversionError("nan");
	else if (_s.size() == 1 && _d == 0 && !isdigit(_s[0]))
		return static_cast<double>(_s[0]);
	else if (!std::isdigit(_s[0]))
		throw ConversionError("impossible ");
	return static_cast<double>(_d);
}

/** Private **/
/** Operator **/

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &sc) {
	if (this != &sc) {
		this->_d = sc._d;
		this->_s = sc._s;
	}
	return *this;
}

/** Exception **/

ScalarConversion::ConversionError::ConversionError() throw() {

}

ScalarConversion::ConversionError::ConversionError(std::string what) throw()
		: _what(what) {

}

ScalarConversion::ConversionError::~ConversionError() throw() {

}

ScalarConversion::ConversionError::ConversionError(
		ConversionError const &ce) throw() {
	*this = ce;
}

ScalarConversion::ConversionError &
ScalarConversion::ConversionError::operator=(ConversionError const &e) throw() {
	if (this != &e) {

	}
	return *this;
}

const char *ScalarConversion::ConversionError::what() const throw() {
	return _what.c_str();
}


/** Destructor **/

ScalarConversion::~ScalarConversion() {

}

int ScalarConversion::getPrecision() {
	const char *nu = _s.c_str();
	size_t index;
	size_t len = 0;
	for (index = 0; index < strlen(nu); index++) {
		if (nu[index] == '.') {
			len = index +1 ;
			for (; len < strlen(nu); len++) {
				if (!isdigit(nu[len]))
					break;
			}
			break;
		}
	}

	int final =  static_cast<int>(len - index - 1);
	return (final <= -1 ? 1 : final);
}






