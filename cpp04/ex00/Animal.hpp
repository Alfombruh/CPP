#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal const &);

		Animal	&operator=(Animal const &);
};
