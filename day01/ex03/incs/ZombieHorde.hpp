#ifndef __ZOMBIE_HORDE_HPP
#define __ZOMBIE_HORDE_HPP

#include <Zombie.hpp>

class ZombieHorde {
	private:
		Zombie *	_zombie_array;
		int			_nu_zombies;
	public:
		ZombieHorde(int nu);
		~ZombieHorde();
		void announce();
};


#endif //__ZOMBIE_HORDE_HPP