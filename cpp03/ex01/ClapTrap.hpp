#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
	private:
		std::string Name;
		int			HP;
		int			Energy;
		int			AD;

	public:
		ClapTrap();
		ClapTrap(ClapTrap const &);
		ClapTrap(std::string n);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &);

		void		attack(std::string const &target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned int amount);

		void		setName(std::string name);
		void		setHP(int n);
		void		setEnergy(int n);
		void		setAD(int n);
		std::string getName(void)const;
		int			getHP(void)const;
		int			getEnergy(void)const;
		int			getAD(void)const;
};	

#endif
