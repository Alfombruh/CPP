#include "ClapTrap.hpp"

int main(){
	ClapTrap I;
	I.attack("Pedro");
	ClapTrap Jose(I);
	Jose.setName("Paco Sanz");
	Jose.attack("Aingeru");
	I.attack("Paco Sanz");
	return 0;
}
