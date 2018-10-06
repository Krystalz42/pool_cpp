#ifndef __MATERIA_SOURCE__
#define __MATERIA_SOURCE__

#include <IMateriaSource.hpp>

class MateriaSource : virtual public IMateriaSource {

private:
	AMateria	*materias[4];

public:

	MateriaSource();
	MateriaSource(MateriaSource const &ms);
	~MateriaSource();

	MateriaSource &operator=(MateriaSource const & ms);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif //__MATERIA_SOURCE__