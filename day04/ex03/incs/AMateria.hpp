#ifndef __A_MATERIA__
#define __A_MATERIA__

#include <string>
#include <ICharacter.hpp>
class ICharacter;

class AMateria {
protected:
	unsigned int	_xp;
	std::string		_type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & am);
	virtual ~AMateria();

	virtual AMateria &operator=(AMateria const &am);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //__A_MATERIA__