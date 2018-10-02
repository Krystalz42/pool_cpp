#include <Human.hpp>

int main () {
	Human human;
	human.action(Human::RANGED_ATTACK_ACTION, "Riri");
	human.action(Human::MELEE_ATTACK_ACTION, "Fifi");
	human.action(Human::INTIMIDATING_SHOUT_ACTION, "Loulou");
}