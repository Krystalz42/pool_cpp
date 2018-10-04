
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>

int main () {
	ScavTrap black_panther("Black Panther");
	ScavTrap white_peguin("White Penguin");
	
	FragTrap red_rabbit("Red Rabbit");

	black_panther.challengeNewcomer();
	white_peguin.challengeNewcomer();
	black_panther.challengeNewcomer();
	white_peguin.challengeNewcomer();
	black_panther.challengeNewcomer();
	white_peguin.challengeNewcomer();
	black_panther.challengeNewcomer();
	white_peguin.challengeNewcomer();

	red_rabbit.meleeAttack(black_panther.getName());
	black_panther.takeDamage(30);
	red_rabbit.meleeAttack(white_peguin.getName());
	white_peguin.takeDamage(30);

	

	return (0);
}