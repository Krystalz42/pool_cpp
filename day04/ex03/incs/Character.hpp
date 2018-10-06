#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include <string>
#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character : virtual public ICharacter{
private:
	std::string		_name;
	AMateria *_materias[4];
	Character();
public:
	Character(std::string name);
	Character(Character const &c);
	~Character();

	Character &operator=(Character const &c);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};



#endif //__CHARACTER_HPP__