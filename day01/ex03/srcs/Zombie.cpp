
#include <zombie.h>
#include <iostream>
#include <string>
#include <Zombie.hpp>

/** Constructor **/

Zombie::Zombie() {
		int len = rand() % 10;
    static char const alpha_maj[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static char const consonant[] =
        "bcdfghjklmnpqrstvwxz";
	static char const vowel[] =
        "aeiouy";
    for (int i = 0; i < len; ++i) {
		if (i == 0)
    	    _name += alpha_maj[rand() % (sizeof(alpha_maj) - 1)];
		else if (i % 3) {
	        _name += consonant[rand() % (sizeof(consonant) - 1)];
		} else {
	        _name += vowel[rand() % (sizeof(vowel) - 1)];
		}
    }

 	switch (static_cast<TypeAction>(rand() % 4))
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
		<< "A beatifull student : Calm down "
		 << _name << " !!" << std::endl;
}

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
		<< "A beatifull student : Calm down "
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
