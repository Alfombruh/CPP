#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define BHRED	"\e[1;91m"
# define BHGRN	"\e[1;92m"
# define BHWHT "\e[1;97m"
# define BHMAG "\e[1;95m"
# define BHYEL "\e[1;93m"
# define BOLD	"\033[0;1m"
# define CLOSE	"\033[0;0m"

#include <iostream>
#include <vector>
#include <deque>
#include <exception>

typedef	std::vector<int>	intVec;
typedef	std::deque<int>		intDeque;
typedef	std::vector<int>::iterator	intVecIt;
typedef	std::deque<int>::iterator	intDequeIt;

using std::cout;
using std::string;

class PmergeMe
{
	private:
		intVec lstVec;
		intDeque lstDeq;

		PmergeMe();

		bool	parseArgs(char **argv);

	public:
		~PmergeMe();
		PmergeMe(const PmergeMe &r);
		PmergeMe(int argc, char **argv);

		PmergeMe &operator=(const PmergeMe &r);

		void	printLists(string msg, string color);
		void	shortLists(void);

		class classException : public std::exception
		{
			private:
				char *msg;
			public:
				classException(const char *msg);
				virtual const char *what() const throw();
		};
};

#endif