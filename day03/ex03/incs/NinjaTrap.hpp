#ifndef __NINJA_TRAP_HPP__
#define __NINJA_TRAP_HPP__

#include <string>
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class NinjaTrap : public ClapTrap {
	private:
		void _defaultInitialization() override;

	public:
		NinjaTrap();
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &frag_trap);
		~NinjaTrap();

		NinjaTrap	&operator=(NinjaTrap const &f);

		void ninjaShoebox(NinjaTrap const &t);
		void ninjaShoebox(ClapTrap const &t);
		void ninjaShoebox(ScavTrap const &t);
		void ninjaShoebox(FragTrap const &t);
};

#endif //__NINJA_TRAP_HPP__