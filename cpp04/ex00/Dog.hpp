#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog();
		~Dog();
		Dog(Dog const &);

		Dog &operator=(Dog const &);
		virtual void	makeSound()const;
};

#endif
