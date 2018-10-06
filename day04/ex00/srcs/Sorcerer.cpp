#include <Sorcerer.hpp>

/** Static **/

/** Constructor **/

Sorcerer::Sorcerer() {
	std::cout
		<< "Poor Sorcerer is born !"
		<< std::endl;
}

Sorcerer::Sorcerer(std::string const &name, std::string const &title) :
	_name(name), _title(title) {
	std::cout
		<< _name
		<< " the "
		<< _title
		<< " is born !"
		<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &s) {
	*this = s;
}

/** Public **/

std::string const	&Sorcerer::getName() const {
	return _name;
}

std::string const	&Sorcerer::getTitle() const {
	return _title;
}

void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}

/** Private **/

/** Operator **/

Sorcerer Sorcerer::operator=(Sorcerer const &s) {
	if (this != &s) {
		this->_name = s._name;
		this->_title = s._title;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &s) {
	//I am NAME, TITLE, and I like ponies !
	os
		<< "I'am "
		<< s.getName()
		<< ", "
		<< s.getTitle()
		<< ", and I like ponies"
		<< std::endl;
	return os;
}


/** Destructor **/

Sorcerer::~Sorcerer() {
	std::cout
		<< _name
		<< " the "
		<< _title
		<< " is dead. Consequences will never be the same !"
		<< std::endl;
}
