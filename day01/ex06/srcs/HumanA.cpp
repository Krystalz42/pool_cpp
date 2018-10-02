
#include <HumanA.hpp>		
#include <Weapon.hpp>

/** Constructor **/

HumanA::HumanA(std::string name, Weapon & w) :
	_w(w), _name(name) {
}

/** Public **/

void	HumanA::attack() {
	std::cout
		<< _name
		<< " attack with " 
		<< _w.getType()
		<< " .."
		<< std::endl;
}
/** Private **/
/** Destructor **/
		
HumanA::~HumanA(){
}



