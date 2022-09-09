#include "Zombie.hpp"
#include <iostream>

int main(){
	Zombie *Horde = zombieHorde(20, "Illojuan");
	delete [] Horde;
	return 0;
}
