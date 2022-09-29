#include "ScavTrap.hpp"

int main(){
	ScavTrap I;
	ScavTrap A("Aingeru Alvarez");
	ScavTrap AA(A);

	A.attack("Pablo Mateos");
	AA.attack("Iñaki Solinis");
	I.takeDamage(20);
	I.beRepaired(6);
	return 0;
}
