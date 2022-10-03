#include "Dog.hpp"

Dog::Dog(void){
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::~Dog(void){
	delete brain;
	std::cout << "Dog Default Destructor Called" << std::endl;
}

Dog::Dog(Dog const &r){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = r;
}

Dog	&Dog::operator=(Dog const &r){
	this->type = r.type;
	this->brain = r.brain;
	return *this;
}

void	Dog::makeSound(void)const{
	std::cout << "Bork! Bork! Bork!" << std::endl;
}
