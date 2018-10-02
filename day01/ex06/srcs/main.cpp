
#include <string>
#include <violence.h>
#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>

std::string getDefinitionOfWeapons(WeaponsType wt)
{

	switch (wt)
	{
	case SWORD:
		return "sword";
	case SHOTGUN:
		return "shotgun";
	case DAGGUER:
		return "dagguer";
	case SNIPER:
		return "sniper";
	case SHOVEL:
		return "shovel";
	default:
		return "nullptr";
	}
}

int main()
{
	Weapon sword = Weapon(SWORD);
	HumanA bob("Bob", sword);
	bob.attack();
	sword.setType(SHOVEL);
	bob.attack();

	Weapon dagguer = Weapon(DAGGUER);
	HumanB jim("Jim");
	jim.setWeapon(dagguer);
	jim.attack();
	Weapon shotgun = Weapon(SHOTGUN);
	jim.setWeapon(shotgun);
	jim.attack();
}