#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name){
	Zombie  *random = new Zombie(name);
	random->announce();
	delete random;
}
