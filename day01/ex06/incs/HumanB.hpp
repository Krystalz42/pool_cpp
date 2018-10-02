#ifndef __HUMAN_B_HPP__
#define __HUMAN_B_HPP__

#include <violence.h>
#include <string>
#include <Weapon.hpp>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon & wt);

	private:
		std::string		_name;
		Weapon *		_w;

};

#endif //__HUMAN_A_HPP__