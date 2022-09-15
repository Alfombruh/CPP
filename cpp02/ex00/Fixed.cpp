#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): i (0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed	const &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(Fixed const &r){
	std::cout << "Assignation operator called" << std::endl;
	this->i = r.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->i;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}
