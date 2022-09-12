#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string n, class Weapon &wp): name(n), Weapon(wp){
	std::cout << "HumanA Constructor Called" << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA Destructor Called" << std::endl;
}

void	HumanA::setName(std::string str){
	this->name = str;
}

std::string	HumanA::getName(void){
	return this->name;
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with his " << Weapon.getType() << std::endl;
}
