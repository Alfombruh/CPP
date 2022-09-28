#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	this->Name = "pff";
	this->HitPoints = 100;
	this->Energy = 50;
	this->Damage = 20;
	std::cout << "ScavTrap Default Constructor, a gitanito is being born" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap Default Destructor, killing an innocent ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string const name){
	this->Name = name;
	this->HitPoints = 100;
	this->Energy = 50;
	this->Damage = 20;
	std::cout << "ScavTrap Naming Constructor, " << this->Name << " was created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap	const &r){
	std::cout << "ScavTrap Assignation Constructor, every masterpiece has its cheap copy" << std::endl;
	*this = r;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &r){
	this->Name = r.Name;
	this->HitPoints = r.HitPoints;
	this->Energy = r.Energy;
	this->Damage = r.Damage;
	return *this;
}

void	ScavTrap::attack(std::string name){
	std::cout << "ScavTrap " << this->Name << " attacks " << name << " with all its anger... " << name << " doesn't even flinch" << std::endl;
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->Name << " has entered Gate Keeper mode" << std::endl;
}
