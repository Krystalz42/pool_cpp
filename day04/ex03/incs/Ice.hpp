#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <AMateria.hpp>
#include <iostream>
#include <ICharacter.hpp>

class Ice : virtual public AMateria {
private:

public:
	Ice();
	Ice(std::string const & type);
	Ice(Ice const &i);
	virtual ~Ice();

	virtual Ice &operator=(Ice const &am);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif //__ICE_HPP__