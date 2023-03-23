#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>

using std::cout;
using std::string;

typedef std::stack<int> intStack;

class RPN{
	private:
		intStack lst;

	public:
		RPN(char **argv);
		~RPN(void);
		RPN(RPN &r);

		RPN &operator=(RPN &r);
};

#endif 