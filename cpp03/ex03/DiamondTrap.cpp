#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap Default constructor called, good luck dealing with it!" << std::endl;
}
DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap being Destroyed, and yes, you just murdered a DiamondTrap, congrats" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &r){
	std::cout << "DiamondTrap Copy Constructor being called, guess you cannot be original" << std::endl;
	this = &r;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &){

	return *this;	
}

void	DiamondTrap::whoAmI(void){
	//display his Name
	//display ClapTrap Name
	return ;
}
