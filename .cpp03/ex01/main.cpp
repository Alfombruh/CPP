#include "ScavTrap.hpp"

int main(){
	ScavTrap I;
	ScavTrap Juan("Juan");
	std::cout << std::endl;
	I.guardGate();
	I.takeDamage(20);
	I.beRepaired(10);
	I.attack("Paco Sanz");
	std::cout << std::endl;
	Juan.guardGate();
	Juan.takeDamage(50);
	Juan.beRepaired(100);
	Juan.attack("Ander Amorin Sanchez");
	std::cout << std::endl;
	return 0;
}
