
#include <PhoneBook.hpp>
#include <phonebook.h>
#include <iostream>


int main() {
	PhoneBook		pb;
	std::string		input;
	std::string const question = "What would do like to do ? ";
	std::string const help = "Possible command [ ADD / SEARCH / EXIT ]";
	std::string const prompt = "> ";
	std::string const welcome = "[ Welcome to the new Phonebook 2.0 ! ]";
	std::string const error_add = "error: There is no more space. Buy a new MicroSD !";
	std::string const error_search = "error: What the hell did you write ?";
	std::string const bye = "Good by my lord.";

	std::cout << welcome << std::endl;
	std::cout << help << std::endl;
	while (0x2a) {
		std::cout << question << std::endl;
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input == "ADD") {
			if (pb.addContact() == false)
				std::cout << error_add << std::endl;
		}
		else if (input == "SEARCH") {
			if (pb.searchContact() == false)
				std::cout << error_search << std::endl;
		}
		else if (input == "EXIT" || std::cin.eof()) {
			std::cout << bye << std::endl;
			return (0);
		}
		else
			std::cout << help << std::endl;
	}
	return (1);
}