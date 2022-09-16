#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed{
	private:
		int	i; //the number of decimals | fixed point value
		static const int f = 8;//fractional bits|binary point, the number of bits we have 0 1 2 4 8 16 32 64 128 | 1/4 1/2 1 2 4 8 16 32 
		//4bytes, 3bytes of integer and 1byte of decimal
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const	float x);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed			&operator=(Fixed const &r);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void)const;
		float	toFloat(void)const;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &f);

#endif
