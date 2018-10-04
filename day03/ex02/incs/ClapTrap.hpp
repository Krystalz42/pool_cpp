#ifndef __CLAP_TRAP_HPP
#define __CLAP_TRAP_HPP

#include <string>

class ClapTrap {
	protected:
		std::string _name;
		unsigned int _hit_point;
		unsigned int _max_hit_point;
		unsigned int _energyPoint;
		unsigned int _max_energy_point;
		unsigned int level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;

		virtual void _defaultInitialization();

	public:
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &clap_trap);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &f);

		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string const &getName() const;
};

#endif //__CLAP_TRAP_HPP
