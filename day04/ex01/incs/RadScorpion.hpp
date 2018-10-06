#ifndef __RAD_SCORPION__
#define __RAD_SCORPION__

#include <string>
#include <Enemy.hpp>
#include <iostream>

class RadScorpion : virtual public Enemy {
private:

public:
	RadScorpion();
	RadScorpion(RadScorpion const &e);
	virtual ~RadScorpion();

	RadScorpion &operator=(RadScorpion const &e);
};

#endif //__RAD_SCORPION__