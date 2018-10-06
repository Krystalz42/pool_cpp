#include <AWeapon.hpp>


/** Static **/
/** Constructor **/

AWeapon::AWeapon() {

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::AWeapon(AWeapon const &aw) {
	*this = aw;
}

/** Public **/

std::string const &AWeapon::getName() const {
	return _name;
}
int AWeapon::getAPCost() const {
	return _apcost;
}
int AWeapon::getDamage() const {
	return _damage;
}

/** Private **/

/** Operator **/

AWeapon		&AWeapon::operator=(AWeapon const &aw) {
	if (this != &aw) {
		_name = aw.getName();
		_apcost = aw.getAPCost();
		_damage = aw.getDamage();
	}
	return *this;
}

/** Destructor **/

AWeapon::~AWeapon() {
	std::cout
		<< "A weapon called "
		<< _name
		<< " was been destroy."
		<< std::endl;
}
