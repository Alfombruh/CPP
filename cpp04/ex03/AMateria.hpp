#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "Character.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const &);
		AMateria(std::string const &type);
		std::string const &getType() const;
	
		AMateria &operator=(AMateria const &);

		virtual AMateria *clone()const = 0;
		virtual void use(ICharacter &target);
};

#endif
