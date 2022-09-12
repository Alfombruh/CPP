#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	private:
		std::string	name;
		Weapon	&Weapon;
	public:
		HumanA(std::string n, class Weapon &wp);
		~HumanA();
		void		attack();
		void		setName(std::string str);
		std::string	getName(void);
};

#endif
