
#include <Contact.hpp>
#include <iomanip>

/** Constructor **/

Contact::Contact() {};

/** Private **/

/** Public **/

void Contact::display() {
	std::cout
		<< '|'
		<< std::setfill(' ') << std::setw(10)
		<< info.first_name.substr(0, 9) + ((info.first_name.length() > 9) ? "." : "")
		<< '|'
		<< std::setfill(' ') << std::setw(10)
		<< info.last_name.substr(0, 9) + ((info.last_name.length() > 9) ? "." : "")
		<< '|'
		<< std::setfill(' ') << std::setw(10)
		<< info.nickname.substr(0, 9) + ((info.nickname.length() > 9) ? "." : "")
		<< '|'
		<< std::endl;
}

void Contact::displayFullContact() {
	std::cout
		<< "Her/him sweet first name : " << info.first_name << std::endl
		<< "Her/him cute last name : " << info.last_name << std::endl
		<< "Her/him amazing nickname : " << info.nickname << std::endl
		<< "Her/him pro gamer login : " << info.login << std::endl
		<< "This is where i can find her/him : " << info.postal_address << std::endl
		<< "It's a place where I can spam : " << info.email_address << std::endl
		<< "Her/him phone number : " << info.phone_number << std::endl
		<< "The date, i have to remember : " << info.birthday_date << std::endl
		<< "I can do it whenever he/she wan : " << info.favorite_meal << std::endl
		<< "I would remain silent : " << info.underwear_color << std::endl
		<< "Seriously ?! : " << info.darkest_secret << std::endl;
}

void Contact::createFromInput() {
	std::cout << " [ Tell me more about her/him ]" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, info.first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, info.last_name);
	std::cout << "Nick name : ";
	std::getline(std::cin, info.nickname);
	std::cout << "Login : ";
	std::getline(std::cin, info.login);
	std::cout << "Postal address : ";
	std::getline(std::cin, info.postal_address);
	std::cout << "Email address : ";
	std::getline(std::cin, info.email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, info.phone_number);
	std::cout << "Birthday date : ";
	std::getline(std::cin, info.birthday_date);
	std::cout << "Favorite : ";
	std::getline(std::cin, info.favorite_meal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, info.underwear_color);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, info.darkest_secret);
}



/** Destructor **/

Contact::~Contact() {};
