#include "PmergeMe.hpp"

int main(__unused int argc, __unused char **argv)
{
	try
	{
		PmergeMe lists(argc, argv);
		lists.shortLists();
	}
	catch (std::exception &e)
	{
		cout << BHRED << e.what() << CLOSE << "\n";
	}
	return (0);
}