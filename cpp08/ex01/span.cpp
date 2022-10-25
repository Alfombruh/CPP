#include "span.hpp"
#include <iostream>
#include <algorithm>
#include <cmath>

Span::Span(void){
}

Span::~Span(void){
}

Span::Span(unsigned int N):size(N){
//	for (unsigned int i = 0; i < N; i++)
//		ptr.push_back(0);
}

Span::Span(Span const &r){
	*this = r;
}

Span &Span::operator=(Span const &r){
	if (ptr.size() != 0)
		ptr.erase(ptr.begin(), ptr.end());
	std::vector<int>::iterator	it = ptr.begin();
	while (++it < r.ptr.end())
		ptr.push_back(*it);
	return *this;
}

void	printValue(int value){
	std::cout << value << std::endl;
}

void	Span::printList(void){
	for_each(ptr.begin(), ptr.end(), printValue);
}

void	Span::addNumber(int n){
	if (size == ptr.size())
		throw OutOfBoundException();
	ptr.push_back(n);
}

int		Span::shortestSpan(void){
	int res = 0;
	int last = 0;
	int result;
	sort(ptr.begin(), ptr.end());
	std::vector<int>::iterator it = ptr.begin(); 
	std::vector<int>::iterator end = ptr.end(); 
	last = *it;
	while (++it < end){
		res = *it - last;
		if (it - 1 == ptr.begin() || res < result)
			result = res;
		last = *it;
	}
	return (result);
}

int		Span::longestSpan(void){
	std::vector<int>::iterator	max = std::max_element(ptr.begin(), ptr.end());
	std::vector<int>::iterator	min = std::min_element(ptr.begin(), ptr.end());
	return (*max - *min);
}
