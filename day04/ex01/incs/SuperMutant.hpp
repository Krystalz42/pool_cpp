#ifndef __SUPER_MUTANT__
#define __SUPER_MUTANT__

#include <string>
#include <Enemy.hpp>
#include <iostream>

class SuperMutant : virtual public Enemy {
private:

public:
	SuperMutant();
	SuperMutant(SuperMutant const &e);
	virtual ~SuperMutant();

	SuperMutant &operator=(SuperMutant const &e);

	virtual void takeDamage(int);
};

#endif //__SUPER_MUTANT__