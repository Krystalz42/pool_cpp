#include <MateriaSource.hpp>
#include <iostream>
/** Static **/
/** Constructor **/
MateriaSource::MateriaSource() {
	for (int index = 0; index < 4; index++) {
		materias[index] = 0;
	}
}
MateriaSource::MateriaSource(MateriaSource const &ms) {	
	*this = ms;
}
/** Public **/


void MateriaSource::learnMateria(AMateria* am) {
	for (int index = 0; index < 4; index++) {
		if (materias[index] != 0)
			if (materias[index]->getType() == am->getType()) {
				std::cout << "We know this Materia !" << std::endl;
				return;
			}
	}
	for (int index = 0; index < 4; index++) {
		if (materias[index] == 0) {
			materias[index] = am->clone();
			std::cout << "We learn " + am->getType() << std::endl;
			return;
		}
	}
	std::cout << "My brain is burning" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int index = 0; index < 4; index++) {
		if (materias[index] != 0) {
			if (materias[index]->getType() == type) {

				return materias[index]->clone();
			}
		}
	}
	return 0;
}
/** Private **/
/** Static **/
/** Constructor **/
/** Public **/
/** Private **/
/** Operator **/
/** Destructor **/
/** Operator **/

MateriaSource &MateriaSource::operator=(MateriaSource const & ms) {
	if (this != &ms) {
		
	}
	return *this;
}
/** Destructor **/


MateriaSource::~MateriaSource() {
	for (int index = 0; index < 4; index++) {
		if (materias[index] != 0)
			delete materias[index];
	}
}
