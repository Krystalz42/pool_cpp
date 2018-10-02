#include <Weapon.hpp>
#include <violence.h>
/** Constructor **/

Weapon::Weapon(WeaponsType wt) :
	_weapon_type(wt) ,_type(getDefinitionOfWeapons(_weapon_type)) {
	std::cout
		<< "A new weapon has been created ["
		<< _type
		<< "]"
		<< std::endl;
}

/** Private **/

/** Public **/

std::string const &Weapon::getType() {
	return _type;
}

void Weapon::setType(WeaponsType type) {
	std::cout
		<< "A weapon has been transform from ["
		<< _type;

	_weapon_type = type;
	_type = getDefinitionOfWeapons(_weapon_type);
	std::cout
		<< "]"
		<< " to ["
		<< _type
		<< "]"
		<< std::endl;
}

/** Destructor **/

Weapon::~Weapon() {

}