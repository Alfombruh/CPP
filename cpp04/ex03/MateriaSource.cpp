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
	this->src[0] = r.src[0];
	this->src[1] = r.src[1];
	return *this;
}

void			MateriaSource::learnMateria(AMateria *r){
	std::cout << "learning this materia " << r->getType() << std::endl;
	if (!r->getType().compare("ice"))
		src[0] = r;
	else if (!r->getType().compare("cure"))
		src[1] = r;
	// fix some things
	return ;
}

AMateria* 		MateriaSource::createMateria(std::string const & type){
	std::cout << "creating this materia: " << type << std::endl;
	if (!type.compare("ice"))
		return src[0];
	else if (!type.compare("cure"))
		return src[1];
	return NULL;
}
