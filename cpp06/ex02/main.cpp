#include <iostream>
#include <exception>
#include <sys/time.h>

class Base{
	public:
		virtual ~Base(void){};
};
class A:public Base{
};
class B:public Base{};
class C:public Base{};

static int errorMessage(std::string str){
	std::cout << "\t\tERROR" << std::endl;
	std::cout << str << std::endl;
	return (1);
}

void	identify(Base *p){
	A *classA = dynamic_cast<A *>(p);
	if (classA != NULL)
		std::cout << "A" << std::endl;
	B *classB = dynamic_cast<B *>(p);
	if (classB != NULL)
		std::cout << "B" << std::endl;
	C *classC = dynamic_cast<C *>(p);
	if (classC != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p){
	//prints A, B or C dependeing of which base type we have
	try{
		A &classA = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void) classA;
	}
	catch(std::bad_cast &bc){}
	try{
		B &classB = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void) classB;
	}
	catch(std::bad_cast &bc){}
	try{
		C &classC = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void) classC;
	}
	catch(std::bad_cast &bc){}
}

Base	*generate(void){
	timeval time;
	if (gettimeofday(&time, NULL) == -1)
		return (NULL);
	if (time.tv_usec % 100 > 66)
		return (new A);
	else if (time.tv_usec % 100 > 33)
		return (new B);
	else if (time.tv_usec % 100 > 0)
		return (new C);
	return (NULL);
}

int main(){
	Base *p;
	if (!(p = generate()))
		return (errorMessage("RNG problem, gettimeofday return is -1"));
	identify(*p);
	identify(p);
	delete p;
	return (0);
}
