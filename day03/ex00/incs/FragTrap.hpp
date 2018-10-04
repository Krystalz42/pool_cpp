#ifndef __FRAG_TRAP_HPP
#define __FRAG_TRAP_HPP

#include <string>

class FragTrap {
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
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &frag_trap);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &f);

		void vaulthunter_dot_exe(std::string const & target);
		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string const &getName() const;
};

#endif //__FRAG_TRAP_HPP
