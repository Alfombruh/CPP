#include "RPN.hpp"

void printStack(intStack &lst)
{
	int i;
	if (lst.empty())
		return;
	i = lst.top();
	lst.pop();
	printStack(lst);
	cout << BHGRN << i << CLOSE;
};

int stackTopPop(intStack *lst)
{
	int i = lst->top();
	lst->pop();
	return (i);
};

void sumStack(intStack *lst)
{
	if (lst->size() == 1)
		throw RPN::classException("Error\n");
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(i + j);
};

void subStack(intStack *lst)
{
	if (lst->size() == 1)
		throw RPN::classException("Error\n");
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(j - i);
};

void mulStack(intStack *lst)
{
	if (lst->size() == 1)
		throw RPN::classException("Error\n");
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(i * j);
};

void divStack(intStack *lst)
{
	if (lst->size() == 1)
		throw RPN::classException("Error\n");
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	if (i == 0)
		throw RPN::classException("Cannot divide by 0 :)\n");
	lst->push(j / i);
};

RPN::RPN(char *argv)
{
	for (int i = 0; argv[i] != '\0'; i++)
	{
		if (argv[i] == '+')
			sumStack(&lst);
		else if (argv[i] == '-')
			subStack(&lst);
		else if (argv[i] == '*')
			mulStack(&lst);
		else if (argv[i] == '/')
			divStack(&lst);
		else if (argv[i] == ' ')
			continue;
		else if (argv[i] >= 48 && argv[i] <= 57)
			lst.push(argv[i] - 48);
		else
			throw classException("Not a number nor an operation\n");
	}
	if (lst.size() > 1)
		throw classException("Too many numbers\n");
	printStack(lst);
	cout << "\n";
};
RPN::~RPN(void) { return; };
RPN::RPN(RPN &r) { *this = r; };
RPN &RPN::operator=(RPN &r)
{
	lst = r.lst;
	return *this;
};

RPN::classException::classException(const char *msg) : msg((char *)msg){};
const char *RPN::classException::what() const throw() { return (msg); };