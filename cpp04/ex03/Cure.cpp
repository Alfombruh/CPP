#include "Cure.hpp"

Cure::Cure(void){
	std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::~Cure(void){
	std::cout << "Cure Default Destructor Called" << std::endl;
}

Cure::Cure(Cure const &r){
	std::cout << "Cure Copy Constructor Called" << std::endl;
	*this = r;
}

Cure	&Cure::operator=(Cure const &r){
	type = r.type;
	return *this;
}

AMateria *Cure::clone()const{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}
