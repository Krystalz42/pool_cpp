#include <TacticalMarine.hpp>

// displays “”
// •
// rangedAttack()
// displays “* attacks with bolter *”
// •
// meleeAttack()
// displays “* attacks with chainsword

/** Static **/

/** Constructor **/

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}
TacticalMarine::TacticalMarine(TacticalMarine const &tm) {
	*this = tm;
}

/** Public **/

ISpaceMarine *TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}
void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const{
	
	std::cout << "* attacks with chainsword *" << std::endl;
	
}

/** Private **/
/** Operator **/

TacticalMarine &TacticalMarine::operator=(TacticalMarine const & tm) {
	(void)tm;
	return *this;
}

/** Destructor **/


TacticalMarine::~TacticalMarine() {

	std::cout << "Aaargh ..." << std::endl;

}