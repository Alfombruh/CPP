#include "ClapTrap.hpp"

			//(CONS & DES)TRUCTORS//
ClapTrap::ClapTrap(void): Name("Illojuan"), HP(10), Energy(10), AD(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &r){
	std::cout << "ClapTrap assignation constructor called" << std::endl;
	*this = r;
}
ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &r){
	setName(r.getName());
	setHP(r.getHP());
	setEnergy(r.getEnergy());
	setAD(r.getAD());
	return *this;
}

void		ClapTrap::attack(std::string const &target){
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->AD << " points of damage!" << std::endl;
}


void		ClapTrap::takeDamage(unsigned int	amount){
	std::cout << "Claptrap " << this->Name << " takes " << amount << " points of damage" << std::endl;
	this->HP -= amount;
	if (this->HP < 0)
		this->HP = 0;
	std::cout << "ClapTrap " << this->Name << " has " << this->HP << " left" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
	std::cout << "Claptrap " << this->Name << " repairs " << amount << " HP" << std::endl;
	this->HP += amount;
	if (this->HP < 0)
		this->HP = 0;
	std::cout << "ClapTrap " << this->Name << " has " << this->HP << " left" << std::endl;
}

			//SETTERS//
void	ClapTrap::setName(std::string name){
	this->Name = name;
}
void	ClapTrap::setHP(int n){
	this->HP = n;
}
void	ClapTrap::setEnergy(int n){
	this->Energy = n;
}
void	ClapTrap::setAD(int n){
	this->AD = n;
}
			//GETTERS//
std::string	ClapTrap::getName(void)const{
	return this->Name;
}
int			ClapTrap::getHP(void)const{
	return this->HP;
}
int			ClapTrap::getEnergy(void)const{
	return this->Energy;
}
int			ClapTrap::getAD(void)const{
	return this->AD;
}
