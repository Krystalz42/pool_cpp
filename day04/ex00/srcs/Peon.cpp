#include <Peon.hpp>


/** Static **/

/** Constructor **/

Peon::Peon() {

}
Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}
Peon::Peon(Peon const &p) {
	*this = p;
}

/** Public **/

void	Peon::getPolymorphed() const {
	std::cout
		<< _name
		<< " has been turned into a pink pony !"
		<< std::endl;
}

/** Private **/

/** Operator **/

Peon	&Peon::operator=(Peon const &v) {
	if (this != &v) {
		this->_name = v.getName();
	}
	return *this;
}

/** Destructor **/

Peon::~Peon() {
	std::cout << "Bleuark ..." << std::endl;
}

