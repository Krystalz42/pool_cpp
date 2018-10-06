#ifndef __ENNEMY__
#define __ENNEMY__

#include <string>

class Enemy
{
protected:
	Enemy();
	int			_hp;
	std::string	_type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &e);
	virtual ~Enemy();

	Enemy &operator=(Enemy const &e);

	std::string const &getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif //__ENNEMY__