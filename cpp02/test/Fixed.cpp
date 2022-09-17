#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): i (0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(uint8_t const n){
	std::cout << "Int constructor called" << std::endl;
	for (int i = 7; i > 3; i--){
		this->i = n << i;
	}
}

Fixed::Fixed(float const x){
	std::cout << "Float constructor called" << std::endl;
	this->i = roundf(x * pow(2, this->f));
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
	this->i = (uint8_t)r.toInt();
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

void	Fixed::setRawBits(uint8_t const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}

float	myPow(int exp, float base){
	if (exp > 0){
		while(exp > 1){
			base *= base;
			exp--;
		}
	}
	else if (exp < 0){
		while(exp < 0){
			base *= (float)(1.0f / base);
			exp++;
		}
	}
	else{
		std::cout << "exp is 0" << std::endl;
		return 1.0;
	}
	return base;
}

void	Fixed::printBits(void) const{	
	std::cout << std::endl;
	for (int j = 7; j >= 0 ; j--){
		std::cout << (((this->i >> j) & 1) ? 1 : 0);
	}
	std::cout << std::endl;
}

float	Fixed::toFloat(void)const{
	float	x = 0;
	int		k = 7;
	for (int j = 3; j >= -4; j--){
		if ((this->i >> k) & 1)
			x += (float)pow(2.0, j);
		k--;
	}
	return x;
}

int		Fixed::toInt(void)const{
	uint8_t ret = 0;
	for (uint8_t j = 7 ; j > 3 ; j--){
		if ((this->i >> j) & 1)
			ret += pow(2, j - 4);
	}
	return ret;
}
