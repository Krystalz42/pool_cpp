
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <iostream>

int main () {

	std::cout << "Come on ClapTrap and do something specific" << std::endl;
	ClapTrap black_panther("Black Panther");
	std::cout << "Nothing to do." << std::endl;
	std::cout << std::endl;

	std::cout << "Come on ScavTrap and do something" << std::endl;
	ScavTrap white_penguin("White Penguin");
	white_penguin.challengeNewcomer();
	std::cout << std::endl;

	std::cout << "Come on FragTrap and do something" << std::endl;
	FragTrap red_rabbit("Red Rabbit");
	red_rabbit.vaulthunter_dot_exe(black_panther.getName());
	std::cout << std::endl;

	return (0);
}