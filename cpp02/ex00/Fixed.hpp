#ifndef FIXED_H
#define FIXED_H

class	Fixed{
	private:
		int	i;
		static const int f = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed	&operator=(Fixed const &r);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
