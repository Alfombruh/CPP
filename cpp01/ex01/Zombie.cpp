#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void){
	return ;
}

Zombie::~Zombie(void){
	std::cout << "<" << this->_name << "> ";
	std::cout << "Braim Braing Brainstroyed" << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name){
	this->_name = name;
}
