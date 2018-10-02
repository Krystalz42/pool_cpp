

#include <zombie.h>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

std::string randomName() {
	std::string random_name;	
	int len = rand() % 10;
    static char const alpha_maj[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static char const consonant[] =
        "bcdfghjklmnpqrstvwxz";
	static char const vowel[] =
        "aeiouy";
    for (int i = 0; i < len; ++i) {
		if (i == 0)
    	    random_name += alpha_maj[rand() % (sizeof(alpha_maj) - 1)];
		else if (i % 3) {
	        random_name += consonant[rand() % (sizeof(consonant) - 1)];
		} else {
	        random_name += vowel[rand() % (sizeof(vowel) - 1)];
		}
    }
	return random_name;
}

TypeAction randomTypeAction() {
	return static_cast<TypeAction>(rand() % 4);
}

void randomChump() {
	Zombie z(randomName(), randomTypeAction());
	return;
}

int main() {
	ZombieEvent ze;

	ze.setZombieType(randomTypeAction());
	Zombie *z1 = ze.newZombie(randomName());
	z1->announce();
	ze.setZombieType(randomTypeAction());
	Zombie *z2 = ze.newZombie(randomName());
	z2->announce();
	ze.setZombieType(randomTypeAction());
	Zombie *z3 = ze.newZombie(randomName());
	z3->announce();

	randomChump();
	randomChump();
	randomChump();
	randomChump();
	
	delete z1;
	delete z2;
	delete z3;

	return (0);
}