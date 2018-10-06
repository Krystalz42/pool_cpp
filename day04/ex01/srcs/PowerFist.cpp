#include <PowerFist.hpp>

/** Static **/

/** Constructor **/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}
PowerFist::PowerFist(PowerFist const &pr) : AWeapon() {
	*this = pr;
}

/** Public **/

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}


/** Private **/
/** Operator **/

PowerFist		&PowerFist::operator=(PowerFist const &pr) {
	if (this != &pr) {
		_name = pr.getName();
		_apcost = pr.getAPCost();
		_damage = pr.getDamage();
	}
	return *this;
}

/** Destructor **/

PowerFist::~PowerFist() {
	std::cout
		<< "A powerfist called "
		<< _name
		<< " was been destroy."
		<< std::endl;
}

