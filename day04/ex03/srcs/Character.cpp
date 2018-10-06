#include <Character.hpp>
#include <iostream>
/** Static **/
/** Constructor **/

Character::Character() {
}

Character::Character(std::string name) :
	_name(name) {
	for (int index = 0; index < 4; index++) {
		_materias[index] = 0;
	}
}

Character::Character(Character const &c) {
	*this = c;
}

/** Public **/
std::string const & Character::getName() const {
	return _name;
}
void Character::equip(AMateria* m) {
	int idx;
	for (idx =0; idx < 4; idx++) {
		if (_materias[idx] == 0)  {
			_materias[idx] = m;
			std::cout << "Equip " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "No more slot in my pockets" << std::endl;
}
void Character::unequip(int idx) {
	_materias[idx] = 0;
}
void Character::use(int idx, ICharacter& target) {
	if (_materias[idx] != 0) {
		_materias[idx]->use(target);
	}
}

/** Private **/
/** Operator **/

Character &Character::operator=(Character const &c) {

	if (this != &c) {
		for (int index =0; index < 4; index++) {
		if (_materias[index] != 0)
			delete _materias[index];
		}
		this->_name = c._name;
	}
	return *this;
}
/** Destructor **/



Character::~Character() {
	for (int index =0; index < 4; index++) {
		if (_materias[index] != 0)
			delete _materias[index];
	}
}

