#include "RPN.hpp"

int errorMessage(string msg)
{
	std::cerr << msg << "\n";
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (errorMessage("./RPN \"<args>\""));
	try
	{
		RPN PolishNotation(argv[1]);
	}
	catch (std::exception &e)
	{
		cout << BHRED << e.what() << CLOSE;
	}
	return (0);
}