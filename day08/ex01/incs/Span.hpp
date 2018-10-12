//
// Created by Alexandre ROULIN on 11/10/2018.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>

class Span {
private:
	Span();
	std::vector<int>	_vector;
	unsigned int		_size;
public:
	Span(unsigned int size);
	Span(Span const &s);
	Span &operator=(Span const &s);
	~Span();

	void			addNumber(unsigned int element);
	void			addNumber(std::vector<int> integer);
	int shortestSpan();
	int longestSpan();
};

#endif //EX01_SPAN_HPP
