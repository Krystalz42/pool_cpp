#include <Victim.hpp>

/** Static **/
/** Constructor **/

Victim::Victim() {
		std::cout
		<< "Some random victim called "
		<< _name
		<< " just popped !"
		<< std::endl;
}

Victim::Victim(std::string name):
	_name(name) {
	//Some random victim called NAME just popped !
	std::cout
		<< "Some random victim called "
		<< _name
		<< " just popped !"
		<< std::endl;
}
Victim::Victim(Victim const &v) {
	*this = v;
}

/** Public **/

std::string const &Victim::getName() const {
	return _name;
}

void Victim::getPolymorphed() const {
	std::cout
		<< _name
		<< " has been turned into a cute little sheep !"
		<< std::endl;
}

/** Private **/

/** Operator **/

Victim	&Victim::operator=(Victim const &v) {
	if (this != &v) {
		this->_name = v._name;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Victim const & v) {
	os
		<< "I'm "
		<< v.getName()
		<< " and I like otters !"
		<< std::endl;
	return os;
}

/** Destructor **/

Victim::~Victim() {
	//Victim NAME just died for no apparent reason !
	std::cout
		<< "Victim "
		<< _name
		<< " just died for no apparent reason !"
		<< std::endl;
}
