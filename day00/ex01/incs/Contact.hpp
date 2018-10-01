#ifndef __CONTACT__
#define __CONTACT__

#include <phonebook.h>
#include <iostream>  

class Contact {
	private:
		information info;
	public:
		Contact();
		~Contact();
		void createFromInput();
		void displayFullContact();
		void display();

};

#endif //__CONTACT__