#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &);

		Animal		&operator=(Animal const &);

		virtual void		makeSound(void)const;
		std::string getType(void)const;
};

#endif
