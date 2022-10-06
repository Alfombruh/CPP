#include "Ice.hpp"

Ice::Ice(void){
	std::cout << "Ice Default Constructor Called" << std::endl;
	type = "ice";
}

Ice::~Ice(void){
	std::cout << "Ice Default Destructor Called" << std::endl;
}

Ice::Ice(Ice const &r){
	std::cout << "Ice Copy Constructor Called" << std::endl;
	*this = r;
}


Ice	&Ice::operator=(Ice const &r){
	type = r.type;
	return *this;
}

AMateria *Ice::clone()const{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
