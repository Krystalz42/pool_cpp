#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <zombie.h>
#include <string>

class Zombie {
	public:
		Zombie(std::string name, TypeAction type);
		~Zombie();
		void announce();
	private:
		std::string			_name;
		std::string			_type_definition;

};

#endif // __ZOMBIE_HPP__