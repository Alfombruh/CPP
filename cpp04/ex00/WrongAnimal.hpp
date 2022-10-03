#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &);

		WrongAnimal		&operator=(WrongAnimal const &);

		virtual void		makeSound(void)const;
		std::string			getType(void)const;
};

#endif
