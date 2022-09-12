#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string ty): type(ty){
	std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon(void){
	std::cout << "Weapon Destructor Called" << std::endl;
}

void	Weapon::setType(std::string str){
	this->type = str;
}

std::string	Weapon::getType(void){
	return this->type;
}
