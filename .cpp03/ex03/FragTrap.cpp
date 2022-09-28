#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(){
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	std::cout << this->getName() << ": just call me Machine, I dont care" << std::endl;
	this->HP = 100;
	this->Energy = 100;
	this->AD = 30;
}
FragTrap::~FragTrap(){
	std::cout << "FragTrap Default Desctructor Called. Yes, that FragTrap is dying" << std::endl;
}
FragTrap::FragTrap(FragTrap const &r){
	std::cout << "FragTrap Copy Constructor Called, no one is and OG anymore" << std::endl;
	*this = r;
}
FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap Naming Constructor Called" << std::endl;
	this->Name = name;
	std::cout << this->Name << ":	YO!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &r){
	std::cout << "FragTrap Assignation Operator" << std::endl;
	this->setName(r.getName());
	return *this;
}
		
void		FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->getName() << " is requesting a postive high five request" << std::endl;
	return ;
}

void		FragTrap::attack(std::string const &name){
	std::cout << "FragTrap (" << this->getName() << ") unleashes all his anger on " << name << " dealing a unimaginable amount of damage" << std::endl;
}

