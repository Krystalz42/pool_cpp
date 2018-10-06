#include <Cure.hpp>

/** Static **/
/** Constructor **/

Cure::Cure(): AMateria("cure") {

}

Cure::Cure(std::string const & type) : AMateria(type) {
	
}

Cure::Cure(Cure const &c) {
	*this = c;
}

/** Public **/

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	 
	std::cout
		<< "* heals "
		<< target.getName()
		<< "’s wounds *" 
		<< std::endl;

}
/** Private **/
/** Operator **/

Cure &Cure::operator=(Cure const &am) {
	if (this != &am) {
		this->_xp = am._xp;
		this->_type = am._type;
	}
	return *this;
}
/** Destructor **/


Cure::~Cure() {

}

