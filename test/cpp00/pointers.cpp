#include <iostream>
#include "pointers.hpp"

Sample::Sample(void): foo(0){
	std::cout << "Constructor Called" << std::endl;
	Sample::privInst += 1;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor Called" << std::endl;
	return ;
}

void	Sample::bar(void) const {
	std::cout << "Member fucntion bar called" << std::endl;
	return;
}

int Sample::getInst(void){
	return Sample::privInst ;
}

int Sample::privInst = 0;
