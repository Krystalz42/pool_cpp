#ifndef __A_WEAPON_HPP__
#define __A_WEAPON_HPP__

#include <string>
#include <iostream>

class AWeapon {
private:

protected:
	AWeapon();
	std::string		_name;
	int				_apcost;
	int				_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &aw);
	virtual ~AWeapon();

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;

	AWeapon		&operator=(AWeapon const &aw);

	virtual void attack() const = 0;
};

#endif //__A_WEAPON_HPP__
