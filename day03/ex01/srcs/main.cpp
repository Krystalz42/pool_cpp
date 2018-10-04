
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>

int main () {
	ScavTrap black_panther("Black Panther");
	ScavTrap white_penguin("White Penguin");

	FragTrap red_rabbit("Red Rabbit");

	black_panther.challengeNewcomer();
	white_penguin.challengeNewcomer();

	red_rabbit.meleeAttack(black_panther.getName());
	black_panther.takeDamage(30);
	red_rabbit.rangedAttack(white_penguin.getName());
	white_penguin.takeDamage(30);

	

	return (0);
}