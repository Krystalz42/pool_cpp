#ifndef __SCAV_TRAP_HPP__
#define __SCAV_TRAP_HPP__

#include <string>
#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap {
	private:
		void _defaultInitialization();

	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &scav_trap);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &f);

		void challengeNewcomer();
};
#endif //__SCAV_TRAP_HPP__