#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <iostream>
#include <string>
#include <violence.h>

class Weapon {
	private:
		WeaponsType		_weapon_type;
		std::string		_type;
	public:
		Weapon(WeaponsType wt);
		~Weapon();
		std::string const &	getType();
		void				setType(WeaponsType wt);
};

#endif //__WEAPON_HPP