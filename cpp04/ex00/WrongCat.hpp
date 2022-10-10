#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &);

		WrongCat	&operator=(WrongCat const &);

		void	makeSound()const;
};

#endif
