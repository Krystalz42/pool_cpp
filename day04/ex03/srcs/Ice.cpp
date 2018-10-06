#include <Ice.hpp>

/** Static **/
/** Constructor **/

Ice::Ice(): AMateria("ice") {

}

Ice::Ice(std::string const & type) : AMateria(type) {

}

Ice::Ice(Ice const &i) {
	*this = i;
}

/** Public **/

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout
		<< "* shoots an ice bolt at "
		<< target.getName()
		<<
		" *"
		<< std::endl;
}
/** Private **/
/** Operator **/

Ice &Ice::operator=(Ice const &am) {
	if (this != &am) {
		this->_xp = am._xp;
		this->_type = am._type;
	}
	return *this;
}
/** Destructor **/


Ice::~Ice() {

}

