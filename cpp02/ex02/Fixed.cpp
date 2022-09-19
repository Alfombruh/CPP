#include "Fixed.hpp"
#include <iostream>
#include <cmath>

#define EPSILON 0.00390625

					//CONSTRUCTORS && DESTRUCTOR//

Fixed::Fixed(void): i (0 << f){
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n){
	//std::cout << "Int constructor called" << std::endl;
	setRawBits(roundf(n * (1 << f)));
}

Fixed::Fixed(float const x){
	//std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(x * (1 << f)));
}

Fixed::Fixed(Fixed	const &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

					//OPERATORS//

Fixed			&Fixed::operator=(Fixed const &r){
	//std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(r.getRawBits());
	return *this;
}

Fixed			Fixed::operator+(Fixed const &r){
	return i + r.i;
}

Fixed			Fixed::operator-(Fixed const &r){
	return i - r.i;
}

Fixed			Fixed::operator*(Fixed const &r){
	return i * r.i;
}

Fixed			Fixed::operator/(Fixed const &r){
	return i / r.i;
}

bool			Fixed::operator==(Fixed const &r){
	if (i == r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator!=(Fixed const &r){
	if (i == r.i)
		return false;
	else
		return true;
}

bool			Fixed::operator>(Fixed const &r){
	if (i > r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator<(Fixed const &r){
	if (i < r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator>=(Fixed const &r){
	if (i >= r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator<=(Fixed const &r){
	if (i <= r.i)
		return true;
	else
		return false;
}

void		Fixed::operator++(Fixed const &r){
	this = this + EPSILON;
}

void		Fixed::operator--(Fixed const &r){
	this = this - EPSILON;
}

void		Fixed::++operator(Fixed const &r){
	this = this + EPSILON;
}

void		Fixed::--operator(Fixed const &r){
	this = this - EPSILON;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &f){
	os << f.toFloat();	
	return os;
};

					//MEMBER FUNCTIONS//

int			Fixed::getRawBits(void)const{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->i;
}

void		Fixed::setRawBits(int const raw){
	//std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}

float		Fixed::toFloat(void)const{
	return (roundf(i) / (1 << f));
}

int			Fixed::toInt(void)const{
	return (i / (1 << f));
}

static int	Fixed::min(Fixed &x, Fixed &y){
	if (x <= y)
		return x;
	else
		return y;
}

static int	Fixed::max(Fixed &x, Fixed &y){
	if (x >= y)
		return x;
	else
		return y;
}
