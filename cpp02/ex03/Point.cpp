#include "Point.hpp"

Point::Point(void): x(0), y(0){
	return ;
}

Point::~Point(void){
	return ;
}

Point::Point(const Point &copy){
	*this = copy;
}

Point::Point(const float i, const float j): x(i), y(j){
	return ;
}

Point	&Point::operator=(const Point &r){
	*(Fixed*)&this->x = r.getX();
	*(Fixed*)&this->y = r.getY();
	//changes the address's value instead of the value instead
	return *this;
}

Fixed	Point::getX(void)const{
	return this->x;
}

Fixed	Point::getY(void)const{
	return this->y;
}

std::ostream &operator<<(std::ostream &os, Point const &r){
	os << r.getX() << ", " <<  r.getY() << std::endl;
	return os;
}
