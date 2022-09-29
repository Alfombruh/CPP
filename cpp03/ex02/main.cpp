#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	FragTrap I;
	FragTrap A("Aingeru Alvarez");
	FragTrap AA(A);
	std::cout << std::endl;

	A.attack("Pablo Mateos");
	AA.attack("Iñaki Solinis");
	I.takeDamage(20);
	I.beRepaired(6);
	I.highFivesGuys();
	std::cout << std::endl;
	ScavTrap I2;
	ScavTrap A2("Aingeru Alvarez");
	ScavTrap AA2(A2);

	A2.attack("Pablo Mateos");
	AA2.attack("Iñaki Solinis");
	I2.takeDamage(20);
	I2.beRepaired(6);
	I2.guardGate();
	return 0;
}
