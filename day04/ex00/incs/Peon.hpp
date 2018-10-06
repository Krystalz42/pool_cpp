#ifndef __PEON_HPP__
#define __PEON_HPP__

#include <string>
#include <iostream>
#include <Victim.hpp>

class Peon: public Victim {
private:
public:
	Peon();
	Peon(std::string name);
	Peon(Peon const &p);
	virtual ~Peon();

	virtual void	getPolymorphed() const;
	Peon	&operator=(Peon const &v);
	
};

#endif //__PEON_HPP__
