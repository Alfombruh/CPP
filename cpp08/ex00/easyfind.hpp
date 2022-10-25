#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Exception: public std::exception{
	public:
		virtual const char *what()const throw(){
			return "couldn't find the ocurrence";
		}
};

template<typename T>
typename T::iterator	easyfind(T &r, int const i){
	typename T::iterator it;
	
	it = find(r.begin(), r.end(), i);
	if (it == r.end())
		throw Exception();
	return it;
}

#endif
