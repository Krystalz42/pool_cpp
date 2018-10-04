#include <SuperTrap.hpp>
#include <iostream>
/** Static **/

/** Constructor **/

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap() {
	_name = "404";
	_defaultInitialization();
	std::cout
		<< "A new SuperTrap has been created, called "
		<< _max_hit_point
		<< "."
		<<std::endl;
}
SuperTrap::SuperTrap(std::string const &name)
	: ClapTrap(), FragTrap(), NinjaTrap() {
	_name = name;
	_defaultInitialization();
	std::cout
		<< "A new ScavTrap has been created, called "
		<< _max_hit_point
		<< "."
		<<std::endl;
}
SuperTrap::SuperTrap(SuperTrap const &super_trap)
	: FragTrap(), NinjaTrap() 
	{
	*this = super_trap;
	 std::cout
	 	<< "A new ScavTrap has been created, called "
	 	<< _name
	 	<< "."
	 	<<std::endl;
}

/** Public **/

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

/** Private **/

void SuperTrap::_defaultInitialization(){
	_hit_point = FragTrap::_hit_point;
	_max_hit_point = FragTrap::_max_hit_point;
	_energyPoint = NinjaTrap::_energyPoint;
	_max_energy_point = NinjaTrap::_max_energy_point;
	level = 1;
	_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	_armor_damage_reduction = FragTrap::_armor_damage_reduction;
}

/** Operator **/

SuperTrap	&SuperTrap::operator=(SuperTrap const &f){
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
	return (*this);
}

/** Destructor **/

SuperTrap::~SuperTrap(){
	
}

