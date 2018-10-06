
#ifndef __PLASMA_RIFLE_HPP__
#define __PLASMA_RIFLE_HPP__

#include <AWeapon.hpp>
#include <string>
#include <iostream>

class PlasmaRifle : virtual public AWeapon {
private:
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &pr);
	virtual ~PlasmaRifle();

	PlasmaRifle		&operator=(PlasmaRifle const &pr);

	virtual void attack() const;

};

#endif //__PLASMA_RIFLE_HPP__