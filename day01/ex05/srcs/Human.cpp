
#include <Human.hpp>

/** Constructor **/

Human::Human() {

}

/** Public **/

Brain& Human::getBrain() {
	return _b;
}


std::string const Human::identify() {
	return _b.identify();
}


/** Private **/

/** Destructor **/

Human::~Human() {

}