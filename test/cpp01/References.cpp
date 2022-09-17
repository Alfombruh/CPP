#include <iostream>
#include <string>

void	byPtr(std::string *str){
	*str += " and ponies";
}

void	byConstPtr(std::string const *str){
	std::cout << *str << std::endl;
}

void	byRef(std::string &str){
	str += " and ponies";
}

void	byConstRef(std::string const &str){
	std::cout << str << std::endl;
}

int main()
{
	////
	int	numberOfBalls = 42;
	int	*ballsPtr = &numberOfBalls;
	int	&ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	////
	std::string str = "i like butterfies";
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	str = "i like otters";
	byRef(str);
	byConstRef(str);
	////
	return 0;
}
