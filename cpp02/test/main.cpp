#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int	main(){
	Fixed			a;
	Fixed	const	b((uint8_t)4);
	Fixed	const	c(3.42f);
	Fixed	const	d(5.5f);

	a = Fixed(1.0f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
