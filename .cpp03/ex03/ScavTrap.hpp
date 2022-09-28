#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &);
		ScavTrap(std::string const name);

		ScavTrap	&operator=(ScavTrap const &);
		void		guardGate();
};

#endif
