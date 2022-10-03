#include "Cat.hpp"
#include "Dog.hpp"

int main(){
/*	Animal *array[100];
	std::cout << "Creating 100 Aminals:	" << std::endl;
	for (int i = 0; i < 100; i++){
		if ( i < 50)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << i << std::endl;
	}
	std::cout << "Killing 100 Aminals:	" << std::endl;
	for (int i = 0; i < 100; i++){
		delete array[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Now we start with the Deep Copy tests:	" << std::endl;
	std::cout << std::endl;
	Cat		*cat = new Cat();
	Cat		copy(*cat);
	std::cout << std::endl;

	std::cout << "Cat's in memory is:	" << &(*cat) << std::endl;
	std::cout << "Copy's brain in memory is:	" << &copy << std::endl;
	delete cat;*/
	Animal *temp = new Animal();
	Animal temp2();
	return 0;
}
