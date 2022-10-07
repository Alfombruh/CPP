#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
#include "Character.hpp"

class Cure: public AMateria{
	public:
		Cure();
		virtual ~Cure();
		Cure(Cure const &);

		Cure	&operator=(Cure const &);

		AMateria *clone()const;
		void use(ICharacter &target);
};


#endif
