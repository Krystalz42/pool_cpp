#ifndef __FRAG_TRAP_HPP
#define __FRAG_TRAP_HPP

#include <string>
#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
private:
	void _defaultInitialization();

public:
	FragTrap();

	FragTrap(std::string const &name);

	FragTrap(FragTrap const &frag_trap);

	~FragTrap();

	FragTrap &operator=(FragTrap const &f);

	void meleeAttack(std::string const &target) const;

	void rangedAttack(std::string const &target) const;

	void vaulthunter_dot_exe(std::string const &target);
};

#endif //__FRAG_TRAP_HPP