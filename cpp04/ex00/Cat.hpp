#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		~Cat();
		Cat(Cat const &);

		Cat	&operator=(Cat const &);
};
