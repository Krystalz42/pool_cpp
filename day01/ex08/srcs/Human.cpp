
#include <Human.hpp>
#include <iostream>

std::string const &Human::MELEE_ATTACK_ACTION = "meleeAttack";
std::string const &Human::RANGED_ATTACK_ACTION = "rangedAttack";
std::string const &Human::INTIMIDATING_SHOUT_ACTION = "intimidatingShout";

/** Constructor **/

/** Private **/


void Human::meleeAttack(std::string const &target) {
	std::cout
		<< "I will destroy you, " 
		<< target
		<< " ! *PUNCH*"
		<< std::endl;
}

void Human::rangedAttack(std::string const &target) {
	std::cout
		<< "You're bullshit "
		<< target
		<< "! Rrrrrhhhh PEU"
		<< std::endl;
}

void Human::intimidatingShout(std::string const &target) {
	std::cout
		<< "Come on "
		<< target
		<<" ! COME ON !"
		<< std::endl;
}

/** Public **/

void Human::action(std::string const &action_name, std::string const &target) {

	static std::string action_command[] = {
			MELEE_ATTACK_ACTION,
			RANGED_ATTACK_ACTION,
			INTIMIDATING_SHOUT_ACTION
	};
	static void (Human::*ptr[])(std::string const &) = {
			&Human::meleeAttack,
			&Human::rangedAttack,
			&Human::intimidatingShout
	};

	for (int index = 0; index < 3; index++) {
		if (action_name == action_command[index])
			(this->*ptr[index])(target);
	}
}

/** Destructor **/
