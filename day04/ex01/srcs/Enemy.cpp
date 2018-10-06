#include <Enemy.hpp>

/** Static **/

/** Constructor **/

Enemy::Enemy() {

}
Enemy::Enemy(int hp, std::string const &type) :
	_hp(hp), _type(type) {

}
Enemy::Enemy(Enemy const &e) {
	*this = e;
}

/** Public **/

int Enemy::getHP() const {
	return _hp;
}
void Enemy::takeDamage(int damage) {
	_hp = (damage > _hp ? 0 : _hp - damage);
}

std::string const &Enemy::getType() const {
	return _type;
}

/** Private **/

/** Operator **/

Enemy &Enemy::operator=(Enemy const &e) {
	if (this != &e) {
		this->_hp = e.getHP();
		this->_type = e.getType();
	}
	return *this;
}

/** Destructor **/

Enemy::~Enemy() {

}