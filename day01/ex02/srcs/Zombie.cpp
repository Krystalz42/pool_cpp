
#include <zombie.h>
#include <iostream>
#include <string>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

/** Constructor **/

Zombie::Zombie(std::string name, TypeAction type)
	: _name(name)
{
	switch (type)
	{
		case RUN:
			_type_definition =  "run";
			break;
		case ATTACK:
			_type_definition =  "attack";
			break;
		case EAT:
			_type_definition =  "eat";
			break;
		case SING:
			_type_definition =  "sing";
			break;
	}


	std::cout
		<< _name << ": GrWoowoooW .. "
		<< "ai wouill "
		<< _type_definition
		<< " !" << std::endl
		<< "A beautifull student : Calm down "
		 << _name << " !!" << std::endl;
};

/** Private **/

/** Public **/

void Zombie::announce() {
	std::cout 
		<< "<" << _name
		<< "(" << _type_definition << ")> "
		<< "Braiiiiiiinnnssss ..."
		<< std::endl;
}

/** Destructor **/

Zombie::~Zombie() {
	std::cout << "* " <<_name
		<< " is dying .. * but we don't care !"
		<< std::endl;
};
