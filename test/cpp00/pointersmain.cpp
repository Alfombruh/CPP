#include "pointers.hpp"
#include <iostream>

int main()
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo:	" << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo:	" << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo:	" << instance.foo << std::endl;
	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();
	//
	std::cout << "Number of instances:	" << (instance.getInst()) << std::endl;
	Sample instance2;
	std::cout << "Number of instances:	" << (instance.getInst()) << std::endl;
	Sample instance3;
	std::cout << "Number of instances:	" << (instance.getInst()) << std::endl;
	Sample instance4;
	std::cout << "Number of instances:	" << (instance.getInst()) << std::endl;
	return 0;
}
