#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria{
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &);

		Ice	&operator=(Ice const &);
		
		AMateria *clone()const;
		void use(ICharacter &target);
};

#endif
