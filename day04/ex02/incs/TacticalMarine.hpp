#ifndef __TACTICAL_MARINE__HPP
#define __TACTICAL_MARINE__HPP

#include <iostream>
#include <ISpaceMarine.hpp>

class TacticalMarine: public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &tm);
	~TacticalMarine();

	TacticalMarine &operator=(TacticalMarine const & tm);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif //__TACTICAL_MARINE__HPP