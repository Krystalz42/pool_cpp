#include <ScavTrap.hpp>
#include <iostream>

/** Static **/

/** Constructor **/

ScavTrap::ScavTrap() {
	_name = "404_UNKNOWN";
	_defaultInitialization();
	std::cout
			<< "A new ScavTrap has been created, called "
			<< _name
			<< "."
			<< std::endl;
}

ScavTrap::ScavTrap(std::string const &name) {
	_name = name;
	_defaultInitialization();
	std::cout
			<< "A new ScavTrap has been created, called "
			<< _name
			<< "."
			<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scav_trap) {
	*this = scav_trap;
	std::cout
			<< "A new ScavTrap has been created, called "
			<< _name
			<< "."
			<< std::endl;
}

/** Public **/

void ScavTrap::challengeNewcomer() {
	static std::string const random_challenge[] = {
			"I'm going to unscrew you.",
			"I'm going to spill a bucket of water on you/",
			"My processor is more powerful than you.",
			"You're like a commodor 64.",
			"I'm a linux you're just a macos.",
	};

	std::cout
			<< random_challenge[rand() % 5]
			<< std::endl;
}


/** Private **/

void ScavTrap::_defaultInitialization() {
	_hit_point = 100;
	_max_hit_point = 100;
	_energyPoint = 50;
	_max_energy_point = 50;
	level = 1;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
}

/** Operator **/

ScavTrap &ScavTrap::operator=(ScavTrap const &f) {
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

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: " << _name << " destroyed ..." << std::endl;

}

