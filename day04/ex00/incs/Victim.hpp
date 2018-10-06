#ifndef __VICTIM_HPP__
#define __VICTIM_HPP__

#include <string>
#include <iostream>

class Victim {

protected:
	std::string		_name;
public:
	Victim();
	Victim(std::string name);
	Victim(Victim const &v);
	virtual ~Victim();


	virtual void getPolymorphed() const;
	std::string const &getName() const;
	
	Victim	&operator=(Victim const &v);
};

std::ostream	&operator<<(std::ostream &os, Victim const & v);

#endif //__VICTIM_HPP__
