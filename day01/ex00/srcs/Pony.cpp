
#include <Pony.hpp>
#include <string>
#include <iostream>

Pony::Pony(std::string name, int age, std::string color)
	: _name(name), _age(age), _color(color)  {
	// , 10 years ago
	std::cout
		<<_name << " is the new pony went into the field, with "
		<< _color << " hair, he's "
		<< _age << " year old."
		<< std::endl;

};
Pony::~Pony() {
	std::cout
		<< _name << " ran out !" << std::endl;
};