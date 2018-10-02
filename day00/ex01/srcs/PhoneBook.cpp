
#include  <PhoneBook.hpp>
#include <iostream>  
#include <iomanip>

/** Constructor **/

PhoneBook::PhoneBook() : _current_contact_index(0) {};

/** Private **/

void PhoneBook::displayContact() {
	std::cout << '|'
			  << std::setfill(' ') << std::setw(10) << "index"
			  << '|'
			  << std::setfill(' ') << std::setw(10) << "first name"
			  << '|'
			  << std::setfill(' ') << std::setw(10) << "last name"
			  << '|'
			  << std::setfill(' ') << std::setw(10) << "nickname"
			  << '|'
			  << std::endl;

	for (int index = 0; index < _current_contact_index; index++)
	{
		std::cout << '|'
				  << std::setfill(' ') << std::setw(10) << index;
		_c[index].display();
	}
}

/** Public **/

bool PhoneBook::addContact() {
	if (_current_contact_index == _MAX_CONTACT)
		return false;
	_c[_current_contact_index].createFromInput();
	_current_contact_index++;
	return true;
}

bool PhoneBook::searchContact() {
	std::string					input;
	static std::string const	prompt = "To display a contact, enter an index between 0 and ";
	static std::string const	no_contact = "error: No contact in phonebook";

	if (_current_contact_index != 0) {
		displayContact();
		std::cout << prompt << (_current_contact_index - 1) << std::endl << " > ";
		std::getline(std::cin, input);
		if (input.length() == 1 &&  input[0] >= '0' &&  input[0] <= static_cast<char>((_current_contact_index - 1) + 48))
			_c[static_cast<int>(input[0] - 48)].displayFullContact();
		else
			return false;
	} else {
		std::cout << no_contact << std::endl;
	}
	return true;
}

/** Destructor **/

PhoneBook::~PhoneBook() {}

std::ostream &operator<<(std::ostream &os, const PhoneBook &book) {
	os << "_c: " << book._c << " _current_contact_index: "
	   << book._current_contact_index << " t: " << book.t;
	return os;
};
