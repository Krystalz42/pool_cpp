
#include <FragTrap.hpp>

int main () {
	FragTrap black_panther("Black Panther");
	FragTrap white_penguin("White Penguin");

	black_panther.rangedAttack(white_penguin.getName());
	white_penguin.takeDamage(20);
	white_penguin.beRepaired(30);

	black_panther.meleeAttack(white_penguin.getName());
	white_penguin.takeDamage(30);
	white_penguin.beRepaired(20);

	black_panther.vaulthunter_dot_exe(white_penguin.getName());
	white_penguin.takeDamage(50);

	white_penguin.vaulthunter_dot_exe(black_panther.getName());
	white_penguin.takeDamage(10);
	white_penguin.vaulthunter_dot_exe(black_panther.getName());
	white_penguin.takeDamage(30);
	white_penguin.vaulthunter_dot_exe(black_panther.getName());
	white_penguin.takeDamage(20);
	white_penguin.vaulthunter_dot_exe(black_panther.getName());
	white_penguin.takeDamage(40);
	white_penguin.vaulthunter_dot_exe(black_panther.getName());

	return (0);
}