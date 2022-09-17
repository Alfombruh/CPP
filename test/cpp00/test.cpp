#include "test.hpp"
#include <iostream>

Sample::Sample(void){
	std::cout << "Constructor Called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo:	" << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo:	" << this->_privateFoo << std::endl;

	this->setFoo(0);

	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor Called" << std::endl;
}

void	Sample::publicBar( void ) const{
	std::cout << "Member fuction publicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar( void ) const{
	std::cout << "Member fuction privateBar called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const {
	return this->_Foo;
}

void	Sample::setFoo(int v){
	if ( v >= 0 )
		this->_Foo = v;
	return;
}

int		Sample::compare(Sample * other) const {
	if (this->_Foo < other->get->Foo()  )
		return -1;
	else if (this->_Foo > other->getFoo() )
		return 1;
	return 0;
}
