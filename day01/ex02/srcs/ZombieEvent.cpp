#include <zombie.h>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

ZombieEvent::ZombieEvent()
	:_type(static_cast<TypeAction>(rand() % 5)) {
	
}
ZombieEvent::~ZombieEvent() {

}
Zombie *ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, _type);
}
void ZombieEvent::setZombieType(TypeAction type)
{
	_type = type;
}