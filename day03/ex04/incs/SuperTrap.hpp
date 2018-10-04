#ifndef __SUPER_TRAP_HPP__
#define __SUPER_TRAP_HPP__

#include <FragTrap.hpp>
#include <ClapTrap.hpp>
#include <NinjaTrap.hpp>

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {
	private:
		void _defaultInitialization();

	public:
		SuperTrap();
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &frag_trap);
		~SuperTrap();


		SuperTrap	&operator=(SuperTrap const &f);
};

#endif //__SUPER_TRAP_HPP__