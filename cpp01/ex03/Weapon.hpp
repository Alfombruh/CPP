#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
	private:
		std::string	type;

	public:
		Weapon(std::string ty);
		~Weapon();
		std::string	getType();
		void		setType(std::string str);

};

#endif
