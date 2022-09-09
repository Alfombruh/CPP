#include "Zombie.hpp"
#include <iostream>

int main(){
	Zombie *Carlos = newZombie("Carlos");
	randomChump("Francisco");
	delete Carlos;
	return 0;
}
