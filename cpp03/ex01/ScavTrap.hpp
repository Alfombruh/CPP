#ifndef SCAVTRAP_H
#define SCAVTRAP_H

class ScavTrap: public ClapTrap{
	private:
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const &);

		ScavTrap	&operator=(ScavTrap const &);
		void		guardGate();
}

#endif
