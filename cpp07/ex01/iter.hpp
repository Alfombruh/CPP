#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int i, void (*p)(T const &)){
	for (int j = 0; j < i ; j++){
		p(array[j]);
	 }
}

#endif
