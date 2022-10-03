#include "Cat.hpp"

Cat::Cat(void){
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat(void){
	delete brain;
	std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat::Cat(Cat const &r){
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = r;
}

Cat	&Cat::operator=(Cat const &r){
	brain = new Brain(*r.brain);
	type = r.type;
	std::cout << "&this->brain	= " << &brain << std::endl;
	std::cout << "&r.brain	= " << &r.brain << std::endl;
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Miaaaauuuu!" << std::endl;
}
