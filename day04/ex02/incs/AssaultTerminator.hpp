#ifndef __ASSAULT_TERMINATOR__HPP
#define __ASSAULT_TERMINATOR__HPP

#include <iostream>
#include <ISpaceMarine.hpp>

class AssaultTerminator : virtual public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &tm);
	~AssaultTerminator();

	AssaultTerminator &operator=(AssaultTerminator const & tm);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif //__ASSAULT_TERMINATOR__HPP