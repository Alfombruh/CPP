#include "Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name){
	Zombie *temp = new Zombie(name);
	return temp;
}
