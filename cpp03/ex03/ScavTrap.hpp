#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string const);
		ScavTrap(ScavTrap const &);

		ScavTrap	&operator=(ScavTrap const &);
		void		attack(std::string name);
		void		guardGate(void);
};

#endif
