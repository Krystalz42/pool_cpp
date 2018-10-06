#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <AMateria.hpp>
#include <ICharacter.hpp>
#include <iostream>

class Cure : virtual public AMateria {
private:

public:
	Cure();
	Cure(std::string const & type);
	Cure(Cure const &c);
	virtual ~Cure();

	virtual Cure &operator=(Cure const &am);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif //__CURE_HPP__