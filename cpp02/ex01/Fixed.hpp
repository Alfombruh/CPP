#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed{
	private:
		int	i;
		static const int f = 8;	
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
