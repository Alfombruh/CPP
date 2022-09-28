#include "ClapTrap.hpp"

int main(){
	ClapTrap I;
	ClapTrap A("Aingeru Alvarez");
	ClapTrap AA(A);

	A.attack("Pablo Mateos");
	AA.attack("Iñaki Solinis");
	I.takeDamage(20);
	I.beRepaired(6);
	return 0;
}
