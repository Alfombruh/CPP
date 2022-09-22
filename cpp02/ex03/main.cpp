#include "Point.hpp"

bool	bsp(Point const v1, Point const v2, Point const v3, Point const p);

int main(){
	std::cout << bsp(Point(2,1), Point(3,4), Point(7,8), Point(0,0)) << std::endl;
	return 0;
}
