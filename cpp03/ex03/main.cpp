#include "DiamondTrap.hpp"

int main(){
	std::cout << std::endl << "\e[1;97mCONSTRUCTORS: \033[0;0m" << std::endl << std::endl;
	DiamondTrap i;
	DiamondTrap p("Unai Cascos", "Persona");
	std::cout << std::endl << "\e[1;97mOUTPUTS: \033[0;0m" << std::endl << std::endl;
	i.displayInfo();
	i.beRepaired(60);
	i.attack("antonio");
	i.takeDamage(20);
	p.takeDamage(70);
	std::cout << std::endl;
	i.highFivesGuys();
	i.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	DiamondTrap Juan(p);
	Juan.displayInfo();
	Juan.beRepaired(40);
	p.displayInfo();

	std::cout << std::endl;
	std::cout << std::endl << "\e[1;97mDESTRUCTORS: \033[0;0m" << std::endl << std::endl;
	return 0;
}
