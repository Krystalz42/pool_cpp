#ifndef __SQUAD_HPP__
#define __SQUAD_HPP__

#include <ISpaceMarine.hpp>
#include <ISquad.hpp>
#include <iostream>

class Squad : public ISquad {

	typedef		struct t_sm
	{
		ISpaceMarine	*space_marine;
		struct t_sm		*next;
	}					t_marines;

	t_marines		*_lst;
	int				_unit;

public:
	Squad();
	Squad(Squad const &s);
	~Squad();

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
	Squad	&operator=(Squad const & s);
};

#endif // __SQUAD_HPP__