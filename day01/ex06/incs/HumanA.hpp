#ifndef __HUMAN_A_HPP__
#define __HUMAN_A_HPP__

#include <violence.h>
#include <string>
#include <Weapon.hpp>

class HumanA {
	public:
		HumanA(std::string name, Weapon & w);
		~HumanA();
		void			attack();

	private:
		Weapon &		_w;
		std::string 	_name;
};

#endif //__HUMAN_A_HPP__