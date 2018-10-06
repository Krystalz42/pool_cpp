#ifndef __SORCERER_HPP__
#define __SORCERER_HPP__

#include <string>
#include <iostream>
#include <Victim.hpp>
#include <Peon.hpp>

class Sorcerer {
private:
	Sorcerer();

	std::string		_name;
	std::string		_title;

public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &s);
	~Sorcerer();

	Sorcerer operator=(Sorcerer const &s);
	std::string const	&getName() const;
	std::string const	&getTitle() const;
	void polymorph(Victim const &) const;
};
std::ostream	&operator<<(std::ostream &os, Sorcerer const &s);

#endif //__SORCERER_HPP__
