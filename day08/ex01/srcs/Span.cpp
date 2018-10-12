//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <Span.hpp>
#include <numeric>
#include <iostream>

#include "Span.hpp"

/** Static **/
/** Constructor **/

Span::Span(unsigned int size) : _size(size) {
}

Span::Span(Span const &s) {
	*this = s;
}

/** Public **/

void Span::addNumber(unsigned int element) {
	if (_vector.size() >= _size)
		throw std::exception();
	_vector.push_back(element);
}

void Span::addNumber(std::vector<int> integer) {
	if (_vector.size() + integer.size() >= _size) {
		throw std::exception();
	}
	_vector.insert(_vector.end(), integer.begin(), integer.end());
}

int Span::shortestSpan() {
	if (_vector.size() <= 1) {
		throw std::exception();
	}
	std::vector<int>				tmp = _vector;
	std::vector<int>::iterator		it = tmp.begin();
	std::vector<int>::iterator		ite = tmp.end();

	std::sort(it, ite);
	std::adjacent_difference(it, ite, it);

	return *std::min_element(it + 1, ite);
}

int Span::longestSpan() {
	if (_vector.size() <= 1)
		throw std::exception();
	return (*std::max_element(_vector.begin(), _vector.end())
			- *std::min_element(_vector.begin(), _vector.end()));
}

/** Private **/

/** Operator **/

Span &Span::operator=(Span const &s) {
	if (this != &s) {

	}
	return *this;
}

/** Destructor **/

Span::~Span() {

}

