#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
	private:
		std::string	Name;
		std::string	cName;
		int			HP;
		int			Energy;
		int			AD;

	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &);
		DiamondTrap(std::string const s, std::string const cS);

		DiamondTrap &operator=(DiamondTrap const &);
		std::string	getName(void)const;
		std::string	getcName(void)const;
		int			getHP(void)const;
		int			getEnergy(void)const;
		int			getAD(void)const;

		void	whoAmI(void);
		using	ScavTrap::attack;
};

#endif
