#ifndef __POWER_FIST_HPP__
#define __POWER_FIST_HPP__

#include <AWeapon.hpp>
#include <string>
#include <iostream>

class PowerFist : virtual public AWeapon {
private:
public:
	PowerFist();
	PowerFist(PowerFist const &pr);
	virtual ~PowerFist();

	PowerFist		&operator=(PowerFist const &pr);

	virtual void attack() const;

};

#endif //__POWER_FIST_HPP__