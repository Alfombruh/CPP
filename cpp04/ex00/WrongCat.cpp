#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat Default Destructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &r){
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = r;
}

WrongCat	&WrongCat::operator=(WrongCat const &r){
	this->type = r.type;
	return *this;
}

void		WrongCat::makeSound(void)const{
	std::cout << "WrongMiaaaauuu!" << std::endl;
}
