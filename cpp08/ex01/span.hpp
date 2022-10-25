#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span{
	private:
		std::vector<int>	ptr;
		unsigned int		size;
		Span();
	public:
		~Span();
		Span(unsigned int N);
		Span(Span const &);

		Span &operator=(Span const &);

		void	addNumber(int i);
		void	printList(void);
		int		shortestSpan(void);
		int		longestSpan(void);
		class OutOfBoundException: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "OUT OF BOUND";
				}
		};
};

#endif
