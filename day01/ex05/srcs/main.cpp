
#include <Human.hpp>
#include <iostream>

int main () {
	Human h;

	std::cout 
		<< "Brain's human identity : " << h.getBrain().identify() << std::endl;
	std::cout 
		<< "Brain's identity       : " << h.identify() << std::endl;
	std::cout
		<< "Are we brains ? : " 
		<< (h.getBrain().identify() == h.identify() ? "Yes, you are !" : "You're stupid !")
		<< std::endl;
}