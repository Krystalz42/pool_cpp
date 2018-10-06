#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include <AWeapon.hpp>
#include <Enemy.hpp>
#include <iostream>

class Character {
private:
	std::string			_name;
	AWeapon				*_w;
	int					_action_point;

	Character();
	static const unsigned int AP_NUMBER = 10;
public:

	Character(std::string const & name);
	Character(Character const &c);
	~Character();
	
	Character &operator=(Character const &c);
	
	void				recoverAP();
	void				equip(AWeapon*);
	void				attack(Enemy**);
	std::string const	&getName() const;
	int const			&getAP() const;
	std::string const	&getWeaponName() const;
	bool				haveWeapon() const;


};

std::ostream	&operator<<(std::ostream &os, Character const &c);

#endif //__CHARACTER_HPP__