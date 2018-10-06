#include <SuperMutant.hpp>

/** Static **/
/** Constructor **/

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &e) {
	*this = e;
}

/** Public **/

void SuperMutant::takeDamage(int damage) {
	int damage_reduction = (damage >= 3 ? damage - 3 : 0) ;
	_hp = (damage_reduction > _hp ? 0 : _hp - damage_reduction);
}

/** Private **/
/** Operator **/

SuperMutant &SuperMutant::operator=(SuperMutant const &e) {
	if (this != &e) {
		this->_hp = e.getHP();
		this->_type = e.getType();
	}
	return *this;
}

/** Destructor **/

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

