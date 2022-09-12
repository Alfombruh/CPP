#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon	*Weapon;
	public:
		HumanB(std::string n);
		~HumanB();
		void		attack();
		void		setName(std::string str);
		void		setWeapon(class Weapon &wp);
		std::string	getName();
};

#endif
