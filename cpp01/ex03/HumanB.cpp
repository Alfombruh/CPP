#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string n): name(n){
	std::cout << "HumanA Constructor Called" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanA Destructor Called" << std::endl;
}

void	HumanB::setWeapon(class Weapon &wp){
	this->Weapon = &wp;
}

void	HumanB::setName(std::string str){
	this->name = str;
}

std::string	HumanB::getName(void){
	return this->name;
}

void	HumanB::attack(void){
	std::cout << this->name << " attacks with his " << Weapon->getType() << std::endl;
}
