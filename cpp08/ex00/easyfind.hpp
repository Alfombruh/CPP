#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

template<typename T>
T	easyfind(T const &r, int const i){
	std::list<int> lst(r);
	int value = 0;
	

	typename std::list<T>::iterator it = lst.begin();
	typename std::list<T>::iterator	end = lst.end();
	while (it < end){
		value = lst[it];
		if (lst[it] == i){
			std::cout << value << std::endl;
			return &lst[it];
		}
	it++;
	}
	return lst;
}

#endif
