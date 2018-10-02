

#include <zombie.h>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

std::string randomName() {
	std::string random_name;	
	int len = rand() % 30;
    static char const alphanum[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        random_name += alphanum[rand() % (sizeof(alphanum) - 1)];
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