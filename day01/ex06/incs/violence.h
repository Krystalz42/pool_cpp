#ifndef __VIOLENCE_H__
#define __VIOLENCE_H__

#include <string>

enum WeaponsType {
	SWORD,
	SHOTGUN,
	DAGGUER,
	SNIPER,
	SHOVEL
};
std::string	getDefinitionOfWeapons(WeaponsType wt);

#endif //__VIOLENCE_H__