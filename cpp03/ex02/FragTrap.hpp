#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &);

		FragTrap	&operator=(FragTrap const &);

		void		highFivesGuys(void);
};

#endif
