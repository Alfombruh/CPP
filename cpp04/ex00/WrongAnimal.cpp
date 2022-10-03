#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal"){
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal Default Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &r){
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = r;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &r){
	this->type = r.type;
	return *this;
}

std::string	WrongAnimal::getType(void)const{
	return type;
}

void	WrongAnimal::makeSound(void)const{
		std::cout << "WrongAnimal sound" << std::endl;
}
