#include "Fixed.hpp"
#include <iostream>

int	main(){
	Fixed	a;
	Fixed	const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max(a,b) << std::endl;
/*
	Fixed	x(3.333f);
	Fixed	y(6.666f);
	Fixed	c(-5.964f);
	Fixed	d(-20.719f);
	Fixed	a1(20.20f);
	Fixed	a2(20.20f);

	std::cout << Fixed::max(x,y) << std::endl;
	std::cout << Fixed::min(x,y) << std::endl;
	std::cout << Fixed::max(x,d) << std::endl;
	std::cout << d - x << std::endl;
	std::cout << x + y << std::endl;
	std::cout << c * d << std::endl;
	std::cout << x * y << std::endl;
	std::cout << Fixed::max(a1, a2) << std::endl;
	std::cout << Fixed::min(a1, a2) << std::endl; */
	return 0;
}
