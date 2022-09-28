#include "DiamondTrap.hpp"

int main(){
	DiamondTrap I;
	std::cout << std::endl;
	std::cout<< I.getcName() << std::endl;
	I.attack("Pac O");
	I.highFivesGuys();
	I.whoAmI();
	std::cout << std::endl;
	
	DiamondTrap x("Illojuan", "Andaluz");
	std::cout << std::endl;
	x.whoAmI();
	x.highFivesGuys();
	x.attack("Paco Sanz");
	x.guardGate();
	ScavTrap::x.takeDamage(20);
	x.beRepaired(20);
	std::cout << std::endl;
	return 0;
}
