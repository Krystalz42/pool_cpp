#include <RadScorpion.hpp>

/** Static **/
/** Constructor **/

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &e) {
	*this = e;
}

/** Public **/

/** Private **/
/** Operator **/

RadScorpion &RadScorpion::operator=(RadScorpion const &e) {
	if (this != &e) {
		this->_hp = e.getHP();
		this->_type = e.getType();
	}
	return *this;
}

/** Destructor **/

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

