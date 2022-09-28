#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	std::cout << this->getName() << ": my pronouns are he/him" << std::endl;
}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Default Desctructor Called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &){
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}
ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap Naming Constructor Called" << std::endl;
	this->setName(name);
	std::cout << this->getName() << " was created, be nice :)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &r){
	std::cout << "ScavTrap Assignation Operator" << std::endl;
	this->setName(r.getName());
	return *this;
}
		
void		ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " has entered Gate keeper mode" << std::endl;
	return ;
}

void		ScavTrap::attack(std::string const &target){
	std::cout << "ScavTrap " << this->getName() << " unleashes all his anger on  " << target << " , dealing " << this->getAD() << ". Dealing an unimaginble amount of damage!" << std::endl;
	std::cout << this->Name << " feels sorry for attacking" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int	amount){
	if (amount < 0)
		return ;
	std::cout << "ScavTrap " << this->Name<< " takes " << amount << " points of damage" << std::endl;
	std::cout << this->getName() << ":	Shit! Fuck! Ouch!" << std::endl;
	this->setHP(this->getHP() - amount);
	if (this->getHP() < 0)
		this->setHP(0);
	std::cout << "ScavTrap " << this->Name << " has " << this->HP << " left" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount){
	if (amount < 0)
		return ;
	std::cout << "ScavTrap " << this->getName() << " repairs " << amount << " HP" << std::endl;
	std::cout << this->getName() << ":	you do NOT wanna know how I get repaired" << std::endl;
	this->HP += amount;
	if (this->getHP() < 0)
		this->setHP(0);
	std::cout << "ScavTrap " << this->getName() << " has " << this->getHP() << " left" << std::endl;

}
