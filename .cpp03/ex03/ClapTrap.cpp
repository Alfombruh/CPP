#include "FragTrap.hpp"

			//(CONS & DES)TRUCTORS//
ClapTrap::ClapTrap(void): Name("Lorem Ipsum"), HP(100), Energy(50), AD(20){
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &r){
	std::cout << "ClapTrap assignation constructor called" << std::endl;
	*this = r;
}
ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap default destructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string s): Name(s), HP(100), Energy(50), AD(20){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &r){
	setName(r.getName());
	setHP(r.getHP());
	setEnergy(r.getEnergy());
	setAD(r.getAD());
	return *this;
}

void		ClapTrap::takeDamage(unsigned int	amount){
	if (amount < 0)
		return ;
	this->HP -= amount;
	if (this->HP < 0)
		std::cout << "ClapTrap " << this->Name << " has unfortunately died. May it rest in peace" << std::endl;
	std::cout << "ClapTrap " << this->Name << " takes " << amount << " damage like a champ" << std::endl;
	std::cout << this->Name << " *starts crying*" << std::endl;
	std::cout << this->Name << "->HP = " << this->HP << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
	if (amount < 0)
		return ;
	if ((int)amount > this->Energy){
		std::cout << "ClapTrap " << this->Name << " cannot be repaired for more HP than Energy it has" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->Name << " is gonna be repaired for " << amount << " HP" << std::endl;
	this->HP += amount;
	this->Energy -= amount;
	std::cout << this->Name << ":	Yummy!!!" << std::endl;
	std::cout << this->Name << "->HP = " << this->HP << std::endl;
}

void		ClapTrap::attack(std::string const &target){
	std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->AD << " points of damage!" << std::endl;
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
