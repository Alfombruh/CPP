#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void): Name("DTrap"), cName(ClapTrap::Name), HP(FragTrap::HP), Energy(ScavTrap::Energy), AD(FragTrap::AD){
	std::cout << "DiamondTrap Default constructor called, good luck dealing with it!" << std::endl;
}
DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap being Destroyed, and yes, you just murdered a DiamondTrap, congrats" << std::endl;
}
DiamondTrap::DiamondTrap(std::string const s, std::string sC){
	std::cout << "DiamondTrap Naming Constructor Called. Congrats, this DiamondTrap is gonna be sooooo unique and special" << std::endl;
	DiamondTrap::Name = s;
	ClapTrap::Name = sC;
	DiamondTrap::cName = ClapTrap::Name;
	DiamondTrap::HP =  FragTrap::HP;
	DiamondTrap::Energy = ScavTrap::Energy;
	DiamondTrap::AD = FragTrap::AD;
}
DiamondTrap::DiamondTrap(DiamondTrap const &r){
	std::cout << "DiamondTrap Copy Constructor being called, guess you cannot be original" << std::endl;
	*this = r;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &r){
	this->Name = r.Name;
	return *this;	
}

void	DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap Name: " << DiamondTrap::Name << std::endl;
	std::cout << "ClapTrap Name: " << DiamondTrap::cName << std::endl;
	return ;
}


std::string	DiamondTrap::getName(void)const{
	return (this->Name);
}
std::string	DiamondTrap::getcName(void)const{
	return (this->cName);
}
int			DiamondTrap::getHP(void)const{
	return (this->HP);
}
int			DiamondTrap::getEnergy(void)const{
	return (this->Energy);
}
int			DiamondTrap::getAD(void)const{
	return (this->AD);
}
