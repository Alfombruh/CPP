#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
//	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	ice = false;
	cure = false;
}

MateriaSource::~MateriaSource(void){
	if (ice)
		delete src[0];
	if (cure)
		delete src[1];
//	std::cout << "MateriaSource Default Destructor Called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &r){
//	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	*this = r;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &r){
	ice = r.ice;
	cure = r.cure;
	this->src[0] = r.src[0];
	this->src[1] = r.src[1];
	return *this;
}

void			MateriaSource::learnMateria(AMateria *r){
//	std::cout << "learning this materia " << r->getType() << std::endl;
	if (!r->getType().compare("ice") && !ice){
		src[0] = r;
		ice = true;
	}
	else if (!r->getType().compare("cure") && !cure){
		src[1] = r;
		cure = true;
	}
	else if (r->getType().compare("ice") && ice)
		delete r;
	else if (r->getType().compare("cure") && cure)
		delete r;
	else 
		delete r;
	return ;
}

AMateria* 		MateriaSource::createMateria(std::string const & type){
//	std::cout << "creating this materia: " << type << std::endl;
	if (!type.compare("ice") && ice)
		return src[0];
	else if (!type.compare("cure") && cure)
		return src[1];
	std::cout << "returning materia NULL" << std::endl;
	return NULL;
}
