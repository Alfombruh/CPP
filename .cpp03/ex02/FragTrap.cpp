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
FragTrap::FragTrap(FragTrap const &){
	std::cout << "FragTrap Copy Constructor Called, no one is and OG anymore" << std::endl;
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

void		FragTrap::takeDamage(unsigned int	amount){
	if (amount < 0)
		return ;
	this->HP -= amount;
	if (this->HP < 0)
		std::cout << "FragTrap " << this->Name << " has unfortunately died. May it rest in peace" << std::endl;
	std::cout << "FragTrap " << this->Name << " takes " << amount << " damage like a champ" << std::endl;
	std::cout << this->Name << " *starts crying*" << std::endl;
	std::cout << this->Name << "->HP = " << this->HP << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount){
	if (amount < 0)
		return ;
	if ((int)amount > this->Energy){
		std::cout << "FragTrap " << this->Name << " cannot be repaired for more HP than Energy it has" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->Name << " is gonna be repaired for " << amount << " HP" << std::endl;
	this->HP += amount;
	this->Energy -= amount;
	std::cout << this->Name << ":	Yummy!!!" << std::endl;
	std::cout << this->Name << "->HP = " << this->HP << std::endl;
}
