#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include <iostream>

class	Point{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		~Point();
		Point(Point const &copy);
		Point(const float i, const float j);

		Point	&operator=(Point const &r);
		void	setX(Fixed const value);
		void	setY(Fixed const value);
		Fixed	getX(void)const;
		Fixed	getY(void)const;
};

std::ostream &operator<<(std::ostream &os, Point const &r);

#endif
