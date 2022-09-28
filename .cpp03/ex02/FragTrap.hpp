#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const &);
		FragTrap(std::string name);

		FragTrap	&operator=(FragTrap const &);
		void		attack(std::string const &name);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);
};

#endif
