
#include <HumanB.hpp>		
		
/** Constructor **/

HumanB::HumanB(std::string name) :
	_name(name), _w(nullptr) {
}

/** Public **/

void	HumanB::attack() {
	std::cout
		<< _name
		<< " attack with " 
		<< _w->getType()
		<< " .."
		<< std::endl;
}

void	HumanB::setWeapon(Weapon & wt) {
	std::cout
		<< _name
		<< " drop "
		<< (_w != nullptr ? "his/her " : "nothing")
		<< (_w != nullptr ? _w->getType() : "")
		<< " and pick up a "
		<< wt.getType()
		<< "."
		<< std::endl;

	wt.getType();
	_w = &wt;
}

/** Private **/
/** Destructor **/
		
HumanB::~HumanB(){
}



