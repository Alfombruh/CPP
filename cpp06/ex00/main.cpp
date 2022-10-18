#include <iostream>
#include "Conversion.hpp"

static int errorMessage(std::string str){
	std::cout << "\t\tERROR" << std::endl;
	std::cout << str << std::endl;
	return 1;
}

int main(int argc, char **argv){
	if (argc != 2 || argv[1] == NULL)
		return errorMessage("Execute program like this:\n./Conversion \"arg1\"");
	Conversion conversion(argv[1]);
	if (!conversion.validConversion())
		return errorMessage("Invalid Conversion");
	conversion.printConversions();
	return 0;
}
