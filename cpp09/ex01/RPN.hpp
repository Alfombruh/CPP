#ifndef RPN_HPP
#define RPN_HPP

# define BHRED	"\e[1;91m"
# define BHGRN	"\e[1;92m"
# define BHWHT	"\e[1;97m"
# define BHMAG	"\e[1;95m"
# define BHYEL	"\e[1;93m"
# define BOLD	"\033[0;1m"
# define CLOSE	"\033[0;0m"

#include <stack>
#include <iostream>
#include <exception>

using std::cout;
using std::string;

typedef std::stack<int> intStack;

class RPN{
	private:
		intStack lst;

		RPN(void);
	public:
		RPN(char *argv);
		~RPN(void);
		RPN(RPN &r);

		RPN &operator=(RPN &r);

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