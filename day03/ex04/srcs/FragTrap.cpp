#include <FragTrap.hpp>
#include <iostream>
/** Static **/
/** Constructor **/

FragTrap::FragTrap() {
	_defaultInitialization();
	std::cout
		<< "A new FragTrap has been created, called "
		<< "."
		<<std::endl;
}
FragTrap::FragTrap(std::string const &name) {
	_name = name;
	_defaultInitialization();
	std::cout
		<< "A new FragTrap has been created, called "
		<< name
		<< "."
		<< std::endl;
}
FragTrap::FragTrap(FragTrap const &frag_trap) {
	_name = frag_trap._name;
	_hit_point = frag_trap._hit_point;
	_max_hit_point = frag_trap._max_hit_point;
	_energyPoint = frag_trap._energyPoint;
	_max_energy_point = frag_trap._max_energy_point;
	level = frag_trap.level;
	_melee_attack_damage = frag_trap._melee_attack_damage;
	_ranged_attack_damage = frag_trap._ranged_attack_damage;
	_armor_damage_reduction = frag_trap._armor_damage_reduction;
	std::cout
		<< "A new FragTrap has been created, called "
		<< "."
		<< std::endl;
}

/** Public **/

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	static std::string const random_attack[] = {
		" sing with ",
		" dance with ",
		" make a infite loop ",
		" launches a virus on ",
		" debug itself.",
	};
	if (_energyPoint == 0) {
		std::cout
		<< "KrrrKrr "
		<< _name
		<< " will"
		<< random_attack[4]
		<< "[SIGTRAP:5]"
		<< std::endl;
	} else {
		_energyPoint -= 25;
		std::cout
			<< "KrrrKrr "
			<< _name
			<< " will"
			<< random_attack[rand() % 4]
			<< target << std::endl;
	}
}

/** Private **/

void FragTrap::_defaultInitialization() {

	_hit_point = 100;
	_max_hit_point = 100;
	_energyPoint = 100;
	_max_energy_point = 100;
	level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
}
/** Operator **/

FragTrap	&FragTrap::operator=(FragTrap const &f) {
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

FragTrap::~FragTrap() {
	std::cout << "FragTrap: " << _name << " destroyed ..." << std::endl;	
}

void FragTrap::rangedAttack(std::string const &target) const {
	ClapTrap::rangedAttack(target);
}
