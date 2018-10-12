//
// Created by Alexandre ROULIN on 11/10/2018.
//

#include <Span.hpp>
#include <iostream>

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	unsigned int const NUMBER = 100000;
	Span s(NUMBER);
	unsigned int nu = 0;
	unsigned int index = 0;
	for (; index < 6; index++) {
		nu = rand() % UINT_MAX;
		std::cout << nu << std::endl;
		s.addNumber(nu);
	}
	std::cout << "Shortest Span : " << s.shortestSpan() << std::endl;
	std::cout << "Longest Span : "<< s.longestSpan() << std::endl;

	for (; index < NUMBER; index++) {
		nu = rand() % UINT_MAX;
		s.addNumber(nu);
	}
	std::cout << "Shortest Span : " << s.shortestSpan() << std::endl;
	std::cout << "Longest Span : "<< s.longestSpan() << std::endl;
	Span    instance(1);

	try
	{
		for (int index = 0; index < 2; index += 1)
			instance.addNumber(1);

	}
	catch (std::exception & err)
	{
		std::cout << "Catch exception from addNumber" << std::endl;
	}

	try {
		std::cout << "min: " << instance.shortestSpan() << std::endl;
		std::cout << "max: " << instance.longestSpan() << std::endl;
	}
	catch (std::exception & err)
	{
		std::cout << "Catch exception from shortest OR longestSpan" << std::endl;
	}
}