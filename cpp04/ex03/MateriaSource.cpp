#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource(void){
	std::cout << "MateriaSource Default Destructor Called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &r){
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	*this = r;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &r){
	(void) r;
	(void) inventory;
	//AMateria *temp = new Ice(r.inventory[0]);
	//inventory = r.inventory;
	//inventory[0] = r.inventory[0];
	//inventory[1] = r.inventory[1];
	//inventory[2] = r.inventory[2];
	//inventory[3] = r.inventory[3];
	return *this;
}

void			MateriaSource::learnMateria(AMateria *r){
	std::cout << "learning this materia" << r->getType() << std::endl;
	return ;
}

AMateria* 		MateriaSource::createMateria(std::string const & type){
	std::cout << "creating this materia: " << type << std::endl;
	return NULL;
}
