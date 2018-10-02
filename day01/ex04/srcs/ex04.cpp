#include <string>
#include <iostream>

int main() {
	std::string brain_potential = "HI THIS IS BRAIN";

	std::string & ref_brain = brain_potential;
	std::string * ptr_brain = &brain_potential;

	std::cout << "Reference to the brain : \"" << ref_brain << "\"" << std::endl;
	std::cout << "Pointer to the brain   : \"" << *ptr_brain << "\"" <<  std::endl;
}