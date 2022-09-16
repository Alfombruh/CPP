#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): i (0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n): i(n){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const x): f(x){
	std::cout << "Float constructor called" << std::endl;
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
	this->i = r.getRawBits();
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
	return this->f;
}

int		Fixed::toInt(void)const{
	return roundf(this->f);
}