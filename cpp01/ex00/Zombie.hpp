#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
	private:
		std::string	_name;

	public:
		Zombie(std::string str);
		~Zombie();
		void	announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
