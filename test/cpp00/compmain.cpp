#include <iostream>
#include "comp.hpp"

int main(){

	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instances 1 and 1 are both in the same part of memory" << std::endl;
	else
		std::cout << "instances 1 and 1 are both not in the same part of memory" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "instances 1 and 2 are both in the same part of memory" << std::endl;
	else
		std::cout << "instances 1 and 2 are both not in the same part of memory" << std::endl;


	if (instance1.compare( &instance1 ) == 0)
		std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are structurally inequal" << std::endl;

	if (instance1.compare ( &instance2 ) == 0)
		std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are structurally inequal" << std::endl;
	return 0;
}
