#include "FragTrap.hpp"

int main(){
	FragTrap I;
	FragTrap Juan("Juan");
	std::cout << std::endl;
	I.attack("Paco Sanz");
	I.takeDamage(20);
	I.beRepaired(10);
	I.highFivesGuys();
	std::cout << std::endl;
	Juan.attack("Ander Amorin Sanchez");
	Juan.takeDamage(90);
	Juan.beRepaired(120);
	Juan.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
