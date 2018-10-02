#include <ZombieHorde.hpp>
#include <Zombie.hpp>
#include <iostream>

ZombieHorde::ZombieHorde(int nu):
	_zombie_array(new Zombie[nu]), _nu_zombies(nu) {
	std::cout 
		<< "A new horde incomming !! with "
		<< nu
		<< " zombie" << (nu > 1 ? "s" : "")
		<< std::endl;
	
}
ZombieHorde::~ZombieHorde() {
	std::cout
		<< "Don Choa : Kill them all !" << std::endl;
	delete [] _zombie_array;

}
void ZombieHorde::announce() {
	for (int index = 0 ; index < _nu_zombies; index++)
		_zombie_array[index].announce();
}