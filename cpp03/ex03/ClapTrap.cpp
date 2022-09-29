#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): Name("Sergüio"), HitPoints(10), Energy(10), Damage(0){
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string const s): Name(s), HitPoints(10), Energy(10), Damage(0){
	std::cout << "ClapTrap Naming Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &r){
	std::cout << "ClapTrap Assignation Constructor Called" << std::endl;
	*this = r;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &r){
	this->Name = r.Name;
	this->HitPoints = r.HitPoints;
	this->Energy = r.Energy;
	this->Damage = r.Damage;
	return *this;
}

void		ClapTrap::attack(std::string name){
	std::cout << "ClapTrap " << this->Name << " attacks " << name << ", causing " << this->Damage << " points of damage" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
	if ((int)amount >= this->HitPoints){
		this->HitPoints = 0;
		std::cout << this->Name << " just died :(" << std::endl;
		return ;
	}
	this->HitPoints -= amount;
	std::cout << this->Name << " took " << amount << " HitPoints, and has " << this->HitPoints << " HP left" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
	if (this->HitPoints == 0){
		std::cout << "That ClapTrap is dead, you cannot revive it" << std::endl;
		return ;
	}
	if ((int)amount > this->Energy){
		std::cout << "Claptrap does not have that much energy" << std::endl;
		return ;
	}
	this->Energy -= amount;
	this->HitPoints += amount;
	std::cout << this->Name << " healed " << amount << " HitPoints, and has " << this->HitPoints << " HP left and " << this->Energy << " Energy left" << std::endl;
}
