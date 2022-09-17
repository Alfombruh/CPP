#include "comp.hpp"
#include <iostream>

Sample::Sample(int v) : _Foo(v) {
	std::cout << "Constructor Called" << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor Called" << std::endl;
	return ;
}


int	Sample::getFoo(void) const {
	return this->_Foo;
}

int		Sample::compare(Sample * other) const {
	if (this->_Foo < other->getFoo()  )
		return -1;
	else if (this->_Foo > other->getFoo() )
		return 1;
	return 0;
}
