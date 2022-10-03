#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	((Cat *)meta)->makeSound();
	delete meta;
	delete j;
	delete i;

	const	WrongAnimal *meta2 = new WrongAnimal();
	const	WrongAnimal *i2 = new WrongCat();
	const	WrongCat *j2 = new WrongCat();
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	j2->makeSound();
	meta2->makeSound();
	delete i2;
	delete j2;
	delete meta2;
	return 0;
}
