#include "Karen.hpp"

int main(){
	Karen	Karen;
	std::cout << "DEBUG:	";
	Karen.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "INFO:	";
	Karen.complain("INFO");
	std::cout << std::endl;
	std::cout << "WARNING:	";
	Karen.complain("WARNING");
	std::cout << std::endl;
	std::cout << "ERROR:	";
	Karen.complain("ERROR");
	std::cout << std::endl;
	return 0;
}
