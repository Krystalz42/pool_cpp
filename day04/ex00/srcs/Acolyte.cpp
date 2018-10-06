#include <Acolyte.hpp>


/** Static **/

/** Constructor **/

Acolyte::Acolyte() {

}
Acolyte::Acolyte(std::string name) : Victim(name) {
	std::cout << "Aummm hummm." << std::endl;
}
Acolyte::Acolyte(Acolyte const &p) {
	*this = p;
}

/** Public **/

void	Acolyte::getPolymorphed() const {
	std::cout
		<< _name
		<< " has been turned into a green rabbit !"
		<< std::endl;
}

/** Private **/

/** Operator **/

Acolyte	&Acolyte::operator=(Acolyte const &v) {
	if (this != &v) {
		this->_name = v.getName();
	}
	return *this;
}

/** Destructor **/

Acolyte::~Acolyte() {
	std::cout << "SHouawww ..." << std::endl;
}

