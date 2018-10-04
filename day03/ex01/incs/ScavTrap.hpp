#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include <string>

class ScavTrap {
	private:
		std::string _name;
		unsigned int _hit_point;
		unsigned int _max_hit_point;
		unsigned int _energyPoint;
		unsigned int _max_energy_point;
		unsigned int level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;
		void _defaultInitialization();

	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &frag_trap);
		~ScavTrap();
		void challengeNewcomer();
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string const &getName() const;
};
#endif //__SCAV_TRAP_HPP__