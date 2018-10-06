#include <AssaultTerminator.hpp>

// displays “”
// •
// rangedAttack()
// displays “* attacks with bolter *”
// •
// meleeAttack()
// displays “* attacks with chainsword

/** Static **/

/** Constructor **/

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const &tm) {
	*this = tm;
}

/** Public **/

ISpaceMarine *AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}
void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack()const {
	
	std::cout << "* attacks with chainfists " << std::endl;
	
}

/** Private **/
/** Operator **/

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const & tm) {
	(void)tm;
	return *this;
}

/** Destructor **/


AssaultTerminator::~AssaultTerminator() {

	std::cout << "I’ll be back ..." << std::endl;

}