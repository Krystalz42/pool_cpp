#ifndef __I_SPACE_MARINE__
#define __I_SPACE_MARINE__


class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif //__I_SPACE_MARINE__