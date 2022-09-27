#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

class DiamondTrap: public FragTrap, public ScavTrap{
	private:
		std::string Name;
		Claptrap::Name ClapTrapName;
		FragTrap::HP HP;
		ScavTrap::Energy Energy;
		FragTrap::AD AD;
		ScavTrap::attack attack;
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &);

		DiamondTrap &operator=(DiamondTrap const &);

		void	whoAmI(void);
};

#endif
