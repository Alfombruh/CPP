#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string str): _name(str){
	//std::cout << "Zombie Constructor Called" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "<" << this->_name << "> ";
	std::cout << "Braim Braing Brainstroyed" << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
