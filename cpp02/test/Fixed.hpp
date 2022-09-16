#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed{
	private:
		uint8_t	i;
		static const uint8_t f = 4;
	public:
		Fixed();
		Fixed(const uint8_t n);
		Fixed(const	float x);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed			&operator=(Fixed const &r);

		void	setRawBits(uint8_t const raw);
		int		getRawBits(void) const;
		int		toInt(void)const;
		float	toFloat(void)const;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &f);

#endif
