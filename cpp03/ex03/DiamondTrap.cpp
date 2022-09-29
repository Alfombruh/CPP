#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): Name("Joxe Mari Payete"){
	Energy = 50;
	std::cout << "DiamondTrap Default Constructor called. Dangerous individual being created..." << std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap Default Destructor called, thank you for freeing society from this danger" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name, std::string const claptrap): Name(name){
	ClapTrap::Name = claptrap;
	Energy = 50;
	std::cout << "DiamondTrap Naming Constructor called, " << name << " has just been created, congrats on endangerin civilization" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &r){
	std::cout << "DiamondTrap Assignation Constructor called, now we have two of the same. Thank you for making a mess" << std::endl;
	*this = r;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &r){
	this->Name = r.Name;
	return *this;
}

void		DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap Name: " << this->Name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::Name << std::endl;
}

void		DiamondTrap::displayInfo(void){

	std::cout << std::endl << "\e[1;97m\tDISPLAYING INFO: \033[0;0m" << std::endl;
	std::cout << "DiamondTrap Name: " << Name << std::endl;
	std::cout << "Claptrap Name: " << ClapTrap::Name << std::endl;
	std::cout << "DiamondTrap HitPoints: " << HitPoints << std::endl;
	std::cout << "DiamondTrap Energy: " << Energy << std::endl;
	std::cout << "DiamondTrap Damage: " << Damage << std::endl;
	std::cout << std::endl;
}
