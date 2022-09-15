#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed{
	private:
		int	i;
		float f;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const	float x);
		Fixed(Fixed const &copy);
		~Fixed();

		Fixed			&operator=(Fixed const &r);
		std::ostream	&operator<<(std::ostream &os, Fixed const &f);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void)const;
		float	toFloat(void)const;
};

#endif
