#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): i (0 << f){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(roundf(n * (1 << f)));
}

Fixed::Fixed(float const x){
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(x * (1 << f)));
}

Fixed::Fixed(Fixed	const &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=(Fixed const &r){
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(r.getRawBits());
	return *this;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &f){
	os << f.toFloat();	
	return os;
};

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->i;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}

float	Fixed::toFloat(void)const{
	return (roundf(i) / (1 << f));
}

int		Fixed::toInt(void)const{
	return (i / (1 << f));
}
