#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <Contact.hpp>
#include <phonebook.h>

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
};

#endif //__PHONEBOOK_HPP__