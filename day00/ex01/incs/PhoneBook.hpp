#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <Contact.hpp>
#include <phonebook.h>
#include <ostream>

class PhoneBook {

	private:
		Contact _c[8];
		static int const _MAX_CONTACT = 8;
		int _current_contact_index;
		void displayContact();
	public:
		PhoneBook();
		~PhoneBook();
		bool	addContact();
		bool	searchContact();

	friend std::ostream &operator<<(std::ostream &os, const PhoneBook &book);
};

#endif //__PHONEBOOK_HPP__