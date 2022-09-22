#include "Point.hpp"

bool	bsp(Point const v1, Point const v2, Point const v3, Point const p);

int main(){
	std::cout << "Primer Prueba:	(Deberia dar false)" << std::endl;
	std::cout << bsp(Point(2,1), Point(3,4), Point(7,8), Point(0,0)) << std::endl;
	std::cout << "Segunda Prueba:	(Deberia dar false)" << std::endl;
	std::cout << bsp(Point(0,0), Point(0,1), Point(1,0), Point(1,1)) << std::endl;
	std::cout << "Tercera Prueba:	(Deberia dar true)" << std::endl;
	std::cout << bsp(Point(0,0), Point(10,0), Point(0,10), Point(5,5)) << std::endl;
	std::cout << "Cuarta Prueba:	(Deberia dar true)" << std::endl;
	std::cout << bsp(Point(0.0f,0.0f), Point(0.0f,89.876f), Point(764.837f,0.0f), Point(0,0)) << std::endl;
	std::cout << "Primer Prueba:	(Deberia dar true)" << std::endl;
	std::cout << bsp(Point(0,0), Point(0,-100), Point(-100,0), Point(-50,-50)) << std::endl;
	std::cout << "Sexta Prueba:	(Deberia dar false)" << std::endl;
	std::cout << bsp(Point(0,0), Point(0,-100), Point(-100,0), Point(-100,-100)) << std::endl;
	return 0;
}
