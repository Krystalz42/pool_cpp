
#include <FragTrap.hpp>

int main () {
	FragTrap black_panther("Black Panther");
	FragTrap white_peguin("White Penguin");

	black_panther.rangedAttack(white_peguin.getName());
	white_peguin.takeDamage(20);
	white_peguin.beRepaired(30);

	black_panther.meleeAttack(white_peguin.getName());
	white_peguin.takeDamage(30);
	white_peguin.beRepaired(20);

	black_panther.vaulthunter_dot_exe(white_peguin.getName());
	white_peguin.takeDamage(50);

	white_peguin.vaulthunter_dot_exe(black_panther.getName());
	white_peguin.takeDamage(10);
	white_peguin.vaulthunter_dot_exe(black_panther.getName());
	white_peguin.takeDamage(30);
	white_peguin.vaulthunter_dot_exe(black_panther.getName());
	white_peguin.takeDamage(20);
	white_peguin.vaulthunter_dot_exe(black_panther.getName());
	white_peguin.takeDamage(40);
	white_peguin.vaulthunter_dot_exe(black_panther.getName());

	return (0);
}