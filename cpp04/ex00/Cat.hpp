#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		~Cat();
		Cat(Cat const &);

		Cat	&operator=(Cat const &);
		virtual void	makeSound()const;
};

#endif
