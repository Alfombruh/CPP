#include "BitcoinExchange.hpp"
#include <iostream>

using std::cout;

int errorMsg(std::string message)
{
	std::cerr << message << "\n";
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (errorMsg("Error: could not open file."));
	BitcoinExchange btc(argv[1]);
	return (0);
}