#include <Character.hpp>

/** Static **/


/** Constructor **/

Character::Character() {

}
Character::Character(std::string const & name) :
	_name(name), _w(nullptr), _action_point(40) {

}
Character::Character(Character const &c) {
	*this = c;
}


/** Public **/

void				Character::recoverAP() {
	_action_point = (_action_point + AP_NUMBER > 40 ? 40 : _action_point + AP_NUMBER) ;
}
void				Character::equip(AWeapon		*w) {
	_w = w;
}
void				Character::attack(Enemy	**e) {
	if ((*e) != nullptr && _w != nullptr) {

		if (_w->getAPCost() <= _action_point) {
			_action_point -= _w->getAPCost();
			std::cout
				<< _name
				<< " attacks "
				<< (*e)->getType()
				<< " with a "
				<< _w->getName()
				<< std::endl;
			_w->attack();
			(*e)->takeDamage(_w->getDamage());
			if ((*e)->getHP() == 0) {
				delete (*e);
				*e = nullptr;
			}
		}
	}
	
}
std::string const	&Character::getName() const {
	return _name;
}

bool				Character::haveWeapon() const {
	return _w != nullptr;
}

std::string const	&Character::getWeaponName() const {
	return _w->getName();
}
int const			&Character::getAP() const {
	return _action_point;
}

/** Private **/
/** Operator **/

Character &Character::operator=(Character const &c) {
	if (this != &c) {
		_name = c.getName();
		_w = nullptr;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Character const &c) {
	os
		<< c.getName()
		<< " has "
		<< c.getAP()
		<< " AP and ";
	if (c.haveWeapon()) {
		os
			<< "wields a "
			<< c.getWeaponName()
			<< std::endl;
	} else {
		os << "is unarmed" << std::endl;
	}
	return os;
}
/** Destructor **/

Character::~Character() {

}



