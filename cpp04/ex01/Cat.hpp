#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(Cat const &);
		
		Cat	&operator=(Cat const &);
		virtual void	makeSound()const;
};

#endif
