#include "Karen.hpp"

int	errorMessage(std::string str){	
	std::cout << "\e[1;91m";
	std::cout << str << "\033[0;0m" << std::endl;
	return 1;
}

int main(int argc, char **argv){
	if (argc != 2)
		return errorMessage("The program takes only 1 argument");
	Karen	Karen;
	Karen.complain(argv[1]);
	return 0;
}
