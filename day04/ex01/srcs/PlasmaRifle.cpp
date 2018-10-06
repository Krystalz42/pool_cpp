#include <PlasmaRifle.hpp>

/** Static **/

/** Constructor **/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const &pr) : AWeapon() {
	*this = pr;
}

/** Public **/

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


/** Private **/
/** Operator **/

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &pr) {
	if (this != &pr) {
		_name = pr.getName();
		_apcost = pr.getAPCost();
		_damage = pr.getDamage();
	}
	return *this;
}

/** Destructor **/

PlasmaRifle::~PlasmaRifle() {
	std::cout
		<< "A plasmarifle called "
		<< _name
		<< " was been destroy."
		<< std::endl;
}

