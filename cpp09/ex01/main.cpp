#include "RPN.hpp"

int errorMessage(string msg)
{
	std::cerr << msg << "\n";
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (errorMessage("./RPN <args>"));
	RPN PolishNotation(argv);
	return (0);
}