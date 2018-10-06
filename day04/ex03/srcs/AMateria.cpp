#include <AMateria.hpp>
#include <iostream>

/** Static **/

/** Constructor **/

AMateria::AMateria() :
	_xp(0) { 
}
AMateria::AMateria(std::string const & type) : 
	_xp(0), _type(type) { 
	
}

AMateria::AMateria(AMateria const & am) {
	*this = am;
}

/** Public **/

std::string const & AMateria::getType() const{ 
	return _type;
}
unsigned int AMateria::getXP() const{ 
	return _xp;
}

void AMateria::use(ICharacter& target){ 
	_xp += 10;
	std::cout << "Use with character" << target.getName() << std::endl;
}

/** Private **/

/** Operator **/

AMateria &AMateria::operator=(AMateria const &am){ 
	if (this != &am) {
		this->_type = "";
		this->_xp = am._xp;
	}
	return *this;
}

/** Destructor **/

AMateria::~AMateria(){ 

}

