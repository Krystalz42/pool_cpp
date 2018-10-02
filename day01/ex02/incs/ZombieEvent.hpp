#ifndef __ZOMBIE_EVENT_HPP__
#define __ZOMBIE_EVENT_HPP__

#include <string>
#include <zombie.h>

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		Zombie *	newZombie(std::string name);
		void		setZombieType(TypeAction type);
	private:
		TypeAction		_type;
};

#endif // __ZOMBIE_EVENT_HPP__