#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
	private:
		std::string	Name;
		int			HitPoints;
		int			Energy;
		int			Damage;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string const);
		ClapTrap(ClapTrap const &);

		ClapTrap &operator=(ClapTrap const &);

		void		attack(std::string name);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
