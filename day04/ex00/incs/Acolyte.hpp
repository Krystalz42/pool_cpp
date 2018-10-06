#ifndef __ACOLYTE_HPP__
#define __ACOLYTE_HPP__

#include <string>
#include <iostream>
#include <Victim.hpp>

class Acolyte: public Victim {
private:
public:
	Acolyte();
	Acolyte(std::string name);
	Acolyte(Acolyte const &p);
	virtual ~Acolyte();

	virtual void	getPolymorphed() const;
	Acolyte	&operator=(Acolyte const &v);
	
};

#endif //__ACOLYTE_HPP__
