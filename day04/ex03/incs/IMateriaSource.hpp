#ifndef __A_MATERIA_HPP__
#define __A_MATERIA_HPP__

#include <AMateria.hpp>
#include <string>
class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //__A_MATERIA_HPP__