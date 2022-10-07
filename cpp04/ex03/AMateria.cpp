#include "AMateria.hpp"

AMateria::AMateria(void){
//	std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::~AMateria(void){
///	std::cout << "AMateria Default Destructor Called" << std::endl;
}

AMateria::AMateria(AMateria const &r){
//	std::cout << "AMateria Copy Constructor Called" << std::endl;
	*this = r;
}
AMateria::AMateria(std::string const &type): type(type){
//	std::cout << "AMateria Assignation Constructor Called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &r){
	type = r.type;
	return *this;
}

std::string const &AMateria::getType(void)const{
	return this->type;
}

void	AMateria::use(ICharacter &target){
	std::cout << "AMateria: " << "\"*AMaterias an AMateria at " << target.getName() << "*\"" << std::endl;
}
