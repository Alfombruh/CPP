#include "Zombie.hpp"
#include <iostream>

Zombie	*zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setname(name);
		horde[i].announce();
	}
	return horde;
}
