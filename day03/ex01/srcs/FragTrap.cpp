#include <FragTrap.hpp>
#include <iostream>

/** Static **/

/** Constructor **/

FragTrap::FragTrap() {
	_name = "404_UNKNOW";
	_defaultInitialization();
	std::cout
		<< "A new FragTrap has been created, called "
		<< _name
		<< "."
		<<std::endl;
}

FragTrap::FragTrap(std::string const &name) :
	_name(name) {
	_defaultInitialization();
	std::cout
		<< "A new FragTrap has been created, called "
		<< _name
		<< "."
		<<std::endl;
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
		<< _name
		<< "."
		<<std::endl;
}

/** Public **/

void FragTrap::rangedAttack(std::string const & target) const {
	std::cout
		<< "KrrrKrr "
		<< _name
		<< " will throw a bolt Krrrrr on "
		<< target
		<< " and going to destroy your krrKrrrr scrap of "
		<< _ranged_attack_damage
		<< " bolts." << std::endl;
}
void FragTrap::meleeAttack(std::string const & target) const {
		std::cout
		<< "KrrrKrr "
		<< _name
		<< " will slap "
		<< target
		<< " and going to destroy your krrKrrrr scrap of "
		<< _melee_attack_damage
		<< " bolts." << std::endl;
}
void FragTrap::takeDamage(unsigned int amount) {
	unsigned int damage_taken = amount - _armor_damage_reduction;
	_hit_point -= (damage_taken > _hit_point ? _hit_point : damage_taken);
	std::cout
		<< "error 404:"
		<< " my bolts .. I lost ";
	if (_hit_point == 0) {
		std::cout
			<< "everything, I have no more bolts.";
	} else {
		std::cout 
			<< damage_taken
			<< " of them.";
	}
	std::cout << std::endl;

}
void FragTrap::beRepaired(unsigned int amount) {
	unsigned int hit_point_temp = (amount + _hit_point > _max_hit_point ? _max_energy_point : amount + _hit_point);
	std::cout
		<< "Ohh i find "
		<< amount
		<< " bolts";
		if (hit_point_temp == _max_energy_point) {
			std::cout
				<< " but i have not enough space to keep it, so i drop "
				<< (_hit_point + amount) % _max_hit_point
				<< " bolts";
		}
	_hit_point = hit_point_temp;
	std::cout << std::endl;
}

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

std::string const &FragTrap::getName() const {
	return _name;
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
	std::cout << _name << " destroyed ..." << std::endl;
}
