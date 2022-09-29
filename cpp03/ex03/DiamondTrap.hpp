#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	private:
		std::string Name;
		using		FragTrap::HitPoints;
		using		ScavTrap::Energy;
		using		FragTrap::Damage;

	public:
		DiamondTrap();
		virtual ~DiamondTrap();
		DiamondTrap(std::string const name, std::string const claptrap);
		DiamondTrap(DiamondTrap const &);

		DiamondTrap	&operator=(DiamondTrap const &);

		void		whoAmI();
		void		displayInfo();
		using		ScavTrap::attack;
};

#endif
