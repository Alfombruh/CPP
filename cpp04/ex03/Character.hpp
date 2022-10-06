#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaSource;
class AMateria;

class Character: public ICharacter{
	private:
		std::string name;
		AMateria *inv[4];
		int			materia_count;
	public:
		Character();
		~Character();
		Character(Character const &);
		Character(std::string const);

		Character	&operator=(Character const &);
		std::string	const	&getName() const;
		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
};

#endif
