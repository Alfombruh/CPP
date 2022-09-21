#include "Fixed.hpp"
#include <iostream>
#include <cmath>

#define EPSILON 0.00390625

					//CONSTRUCTORS && DESTRUCTOR//
Fixed::Fixed(void): i (0 << f){
	return ;
}

Fixed::Fixed(int const n){
	setRawBits(roundf(n * (1 << f)));
}

Fixed::Fixed(float const x){
	setRawBits(roundf(x * (1 << f)));
}

Fixed::Fixed(Fixed	const &copy){
	*this = copy;
}

Fixed::~Fixed(void){
	return ;
}

					//OPERATORS//
Fixed			&Fixed::operator=(Fixed const &r){
	this->setRawBits(r.getRawBits());
	return *this;
}

Fixed			Fixed::operator+(Fixed const &r){
	Fixed a;
	a.setRawBits(getRawBits() + r.getRawBits());
	return a;
}

Fixed			Fixed::operator-(Fixed const &r){
	Fixed a;
	a.setRawBits(getRawBits() - r.getRawBits());
	return a;
}

Fixed			Fixed::operator*(Fixed const &r){
	//return (toFloat() * r.toFloat());
	return (((i>>f) * (r.i >> f)) * (1 >> 8));
}

Fixed			Fixed::operator/(Fixed const &r){
	//return (toFloat() / r.toFloat());
	return ((i << 8)/(r.i << 8));
}

bool			Fixed::operator==(Fixed const &r)const{
	if (i == r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator!=(Fixed const &r)const{
	if (i == r.i)
		return false;
	else
		return true;
}

bool			Fixed::operator>(Fixed const &r)const{
	if (i > r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator<(Fixed const &r)const{
	if (i < r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator>=(Fixed const &r)const{
	if (i >= r.i)
		return true;
	else
		return false;
}

bool			Fixed::operator<=(Fixed const &r)const{
	if (i <= r.i)
		return true;
	else
		return false;
}

Fixed		Fixed::operator++(){
	float	temp;
	temp = this->toFloat() + 0.00390625;
	Fixed ret(temp);
	this->i = ret.i;
	return ret;
}

Fixed		Fixed::operator--(){
	float temp;
	temp = this->toFloat() - 0.00390625;
	Fixed ret(temp);
	this->i = ret.i;
	return ret;
}

Fixed		Fixed::operator++(int){
	float	temp;
	Fixed	ret(*this);
	temp = this->toFloat() + 0.00390625;
	Fixed	nw(temp);
	this->i = nw.i;
	return	ret;
}

Fixed		Fixed::operator--(int){
	float	temp;
	Fixed	ret(*this);
	temp = this->toFloat() - 0.00390625;
	Fixed	nw(temp);
	this->i = nw.i;
	return	ret;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &f){
	os << f.toFloat();	
	return os;
};

					//MEMBER FUNCTIONS//
int			Fixed::getRawBits(void)const{
	return this->i;
}

void		Fixed::setRawBits(int const raw){
	this->i = raw;
}

float		Fixed::toFloat(void)const{
	return (roundf(i) / (1 << f));
}

int			Fixed::toInt(void)const{
	return (i / (1 << f));
}

Fixed	&Fixed::min(Fixed &x, Fixed &y){
	if (x <= y)
		return x;
	else
		return y;
}

Fixed	&Fixed::max(Fixed &x, Fixed &y){
	if (x >= y)
		return x;
	else
		return y;
}

Fixed	&Fixed::min(const Fixed &x, const Fixed &y){
	if (x <= y)
		return ((Fixed &)x);
	else
		return ((Fixed &)y);
}

Fixed	&Fixed::max(const Fixed &x, const Fixed &y){
	if (x >= y)
		return ((Fixed &)x);
	else
		return ((Fixed &)y);
}
