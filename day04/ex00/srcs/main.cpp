#include <Sorcerer.hpp>
#include <Victim.hpp>
#include <Peon.hpp>
#include <Acolyte.hpp>
int main() {
	Sorcerer sorcerer("David", "Polymorphic Master");
	Victim victim("Jefferson");
	Peon peon("Alexandre");
	Acolyte acolyte("Nathan");

	std::cout << victim << peon << sorcerer;

	sorcerer.polymorph(peon);
	sorcerer.polymorph(victim);
	sorcerer.polymorph(acolyte);
	return 0;
}