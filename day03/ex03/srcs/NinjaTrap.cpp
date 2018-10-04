#include <NinjaTrap.hpp>
#include <iostream>
/** Static **/
/** Constructor **/

NinjaTrap::NinjaTrap() {
	std::cout
		<< "A new NinjaTrap has been created, called "
		<< "."
		<<std::endl;
}
NinjaTrap::NinjaTrap(std::string const &name) {
	_name = name;
	std::cout
		<< "A new NinjaTrap has been created, called "
		<< name
		<< "."
		<< std::endl;
}
NinjaTrap::NinjaTrap(NinjaTrap const &ninja_trap) {
	_name = ninja_trap._name;
	_hit_point = ninja_trap._hit_point;
	_max_hit_point = ninja_trap._max_hit_point;
	_energyPoint = ninja_trap._energyPoint;
	_max_energy_point = ninja_trap._max_energy_point;
	level = ninja_trap.level;
	_melee_attack_damage = ninja_trap._melee_attack_damage;
	_ranged_attack_damage = ninja_trap._ranged_attack_damage;
	_armor_damage_reduction = ninja_trap._armor_damage_reduction;
	std::cout
		<< "A new NinjaTrap has been created, called "
		<< "."
		<< std::endl;
}

/** Public **/

void NinjaTrap::ninjaShoebox(NinjaTrap const &t) {
	std::cout
		<< "Hello NinjaTrap called "
		<< t.getName()
		<< "."
		<< std::endl;
}
void NinjaTrap::ninjaShoebox(ClapTrap const &t) {
	std::cout
		<< "Hello ClapTrap called "
		<< t.getName()
		<< "."
		<< std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap const &t) {
	std::cout
		<< "Hello ScavTrap called "
		<< t.getName()
		<< "."
		<< std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap const &t) {
	std::cout
		<< "Hello FragTrap "
		<< t.getName()
		<< "."
		<< std::endl;
}

/** Private **/

void NinjaTrap::_defaultInitialization() {

	_hit_point = 60;
	_max_hit_point = 60;
	_energyPoint = 120;
	_max_energy_point = 120;
	level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
}
/** Operator **/

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &f) {
	if (&f != this) {
		_name = f._name;
		_hit_point = f._hit_point;
		_max_hit_point = f._max_hit_point;
		_energyPoint = f._energyPoint;
		_max_energy_point = f._max_energy_point;
		level = f.level;
		_melee_attack_damage = f._melee_attack_damage;
		_ranged_attack_damage = f._ranged_attack_damage;
		_armor_damage_reduction = f._armor_damage_reduction;
	}
	return *this;
}

/** Destructor **/

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap: " << _name << " destroyed ..." << std::endl;	
}