#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &);
		ScavTrap(std::string name);

		ScavTrap	&operator=(ScavTrap const &);
		void		guardGate();
		void		attack(std::string const &target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int amount);
};

#endif
