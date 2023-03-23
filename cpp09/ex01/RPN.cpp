#include "RPN.hpp"

void printStack(intStack &lst)
{
	int  i;
	if (lst.empty())
		return ;
	i = lst.top();
	lst.pop();
	printStack(lst);
	cout << i;
};

int	stackTopPop(intStack *lst)
{
	int i = lst->top();
	lst->pop();
	return (i);
};

void sumStack(intStack *lst)
{
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(i + j);
};

void subStack(intStack *lst)
{
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(j - i);
};

void mulStack(intStack *lst)
{
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(i * j);
};

void divStack(intStack *lst)
{
	int i = stackTopPop(lst);
	int j = stackTopPop(lst);
	lst->push(j / i);
};

RPN::RPN(char **argv)
{
	for (int i = 1; argv[i] != NULL; i++)
	{
		string temp(argv[i]);
		if (temp == "+")
			sumStack(&lst);
		else if (temp == "-")
			subStack(&lst);
		else if (temp == "*")
			mulStack(&lst);
		else if (temp == "/")
			divStack(&lst);
		else
			lst.push(strtol(argv[i], NULL, 10));
	}
	printStack(lst);
};

RPN::~RPN(void)
{
	return;
};

RPN::RPN(RPN &r)
{
	*this = r;
};

RPN	&RPN::operator=(RPN &r)
{
	lst = r.lst;
	return *this;
};