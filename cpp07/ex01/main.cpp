#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T const &i){
	std::cout << i << std::endl;
}

int main(){
	int i[] = {1, 2, 3, 4, 5, 6};
	iter(i, 5, print);
	std::string str("vennezuela");
	iter(&str, 1, print);
	return (0);
}
