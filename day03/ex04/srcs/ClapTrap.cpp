#include <ClapTrap.hpp>
#include <iostream>

/** Static **/

/** Constructor **/

ClapTrap::ClapTrap() {
	_name = "404_UNKNOW";
	_defaultInitialization();
	std::cout
		<< "A new ClapTrap has been created, called "
		<< _name
		<< "."
		<<std::endl;
}

ClapTrap::ClapTrap(std::string const &name) :
	_name(name) {
	_defaultInitialization();
	std::cout
		<< "A new ClapTrap has been created, called "
		<< _name
		<< "."
		<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap_trap) {
	*this = clap_trap;
	std::cout
		<< "A new ClapTrap has been created, called "
		<< _name
		<< "."
		<<std::endl;
}

/** Public **/

void ClapTrap::rangedAttack(std::string const & target) const {
	std::cout
		<< "KrrrKrr "
		<< _name
		<< " will throw a bolt Krrrrr on "
		<< target
		<< " and going to destroy your krrKrrrr scrap of "
		<< _ranged_attack_damage
		<< " bolts." << std::endl;
}
void ClapTrap::meleeAttack(std::string const & target) const {
		std::cout
		<< "KrrrKrr "
		<< _name
		<< " will slap "
		<< target
		<< " and going to destroy your krrKrrrr scrap of "
		<< _melee_attack_damage
		<< " bolts." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	unsigned int damage_taken = (_armor_damage_reduction > amount ? 0 : amount - _armor_damage_reduction);
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
void ClapTrap::beRepaired(unsigned int amount) {
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

std::string const &ClapTrap::getName() const {
	return _name;
}

/** Private **/

void ClapTrap::_defaultInitialization() {
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

ClapTrap	&ClapTrap::operator=(ClapTrap const &f) {
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

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: " << _name << " destroyed ..." << std::endl;	
}
