#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	this->HitPoints = 100;
	this->Energy = 100;
	this->Damage = 30;
	std::cout << "FragTrap Default Constructor called, ain't no way this mf gonna do something usefull" << std::endl;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Default Destructor called, now that robot is dead I feel somewhat of alone" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name){
	this->Name = name;
	this->HitPoints = 100;
	this->Energy = 100;
	this->Damage = 30;
	std::cout << "FragTrap Naming Constructor called, this one's gotta be a little more special. Welcome " << this->Name << " to the family" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &r){
	*this = r;
}

FragTrap	&FragTrap::operator=(FragTrap const &r){
	this->Name = r.Name;
	this->HitPoints = r.HitPoints;
	this->Energy = r.Energy;
	this->Damage = r.Damage;
	return *this;
}

void		FragTrap::highFivesGuys(void){
	std::cout << this->Name << " is requesting a positive high five request" << std::endl;
}
