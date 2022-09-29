#include <iostream>

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(Animal const &);

		Animal		&operator=(Animal const &);

		void		makeSound(void);
		std::string getType(void);
};
