#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include <iostream>


class Human {
public:
	static std::string const &MELEE_ATTACK_ACTION;
	static std::string const &RANGED_ATTACK_ACTION;
	static std::string const &INTIMIDATING_SHOUT_ACTION;
	void action(std::string const &action_name, std::string const &target);

private:

	void meleeAttack(std::string const &target);

	void rangedAttack(std::string const &target);

	void intimidatingShout(std::string const &target);

};

#endif // __HUMAN_HPP__