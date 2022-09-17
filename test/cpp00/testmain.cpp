#include <iostream>
#include "test.hpp"

int main(){

	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo:	" << instance.publicFoo <<std::endl;
	//instance._privateFoo = 42;
	//std::cout << "instance._privateFoo:	" << instance._privateFoo <<std::endl;

	instance.publicBar();
	//instance._privateBar();
	//THINGS WITH GETTERS AND SETTER
	std::cout << "instance.getFoo():	" << instance.getFoo() << std::endl;
	instance.setFoo(84);
	std::cout << "instance.getFoo():	" << instance.getFoo() << std::endl;

	return 0;
}
