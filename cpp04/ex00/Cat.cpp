#include "Cat.hpp"

Cat::Cat(void){
	type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat::Cat(Cat const &r){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = r;
}

Cat	&Cat::operator=(Cat const &r){
	this->type = r.type;
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Miaaaauuuu!" << std::endl;
}
