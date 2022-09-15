#include "Zombie.hpp"
#include <iostream>
#define N 20

int main(){
	Zombie *Horde = zombieHorde(N, "Illojuan");
	for (int i = 0; i < N; i++){
		Horde[i].announce();
	}
	delete [] Horde;
	return 0;
}
