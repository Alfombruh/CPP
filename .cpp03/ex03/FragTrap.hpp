#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const &);
		FragTrap(std::string name);

		FragTrap	&operator=(FragTrap const &);
		void		highFivesGuys(void);
};

#endif
