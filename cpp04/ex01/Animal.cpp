#include "Animal.hpp"

Animal::Animal(void): type("animal"){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::~Animal(void){
	std::cout << "Animal Default Destructor Called" << std::endl;
}

Animal::Animal(Animal const &r){
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = r;
}

Animal	&Animal::operator=(Animal const &r){
	this->type = r.type;
	return *this;
}

std::string	Animal::getType(void)const{
	return type;
}

void	Animal::makeSound(void)const{
	std::cout << "Animal sound" << std::endl;
}
