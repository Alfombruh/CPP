#include "Point.hpp"
#include <cmath>


//https://math.stackexchange.com/questions/3323379/proof-that-a-point-in-a-triangle-is-inside-a-quadratic-bezier-curve
//https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/

Fixed	area(Point	const i, Point const j, Point const k){
	//abs the return, make own abs shit
	//https://www.youtube.com/watch?v=oWCJPEbIXc0
	Fixed temp = ((i.getX() * (j.getY()-k.getY()) + j.getX() * (k.getY()-i.getY()) + k.getX() * (i.getY()-j.getY()))/Fixed(2.0f));
	if (temp < 0)
		temp = temp * (-1);
	return temp;
}
//To calculate if a point is inside a triangle you just calculate the total area, and the relative area of the point with every pair of v's and then sum they all together, if they match the total Area then te point is inside the triangle
bool	bsp(Point const v1, Point const v2, Point const v3, Point const p){
	Fixed Area = area(v1, v2, v3);
	Fixed A1 = area(p, v2, v3);
	Fixed A2 = area(v1, p, v3);
	Fixed A3 = area(v1, v2, p);
	return ((Area == A1 + A2 + A3)? true : false);
}
