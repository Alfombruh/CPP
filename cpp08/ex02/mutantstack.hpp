#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::deque<T>::iterator iterator;
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &);

		MutantStack &operator=(MutantStack const &);

		iterator	begin(void);
		iterator	end(void);
};

#endif
