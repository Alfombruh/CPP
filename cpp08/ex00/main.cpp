#include "easyfind.hpp"
#include <limits.h>
#include <iostream>
#include <algorithm>
#include <list>

void	printValue(int value){
	std::cout << value << std::endl;
}

int main(){
	std::list<int> lst;

	srand(time(NULL));
	int i = rand() % 100;
	while (i-- > 0){
		lst.push_back(rand() % 100);
	}
	for_each(lst.begin(), lst.end(), printValue());
	//easyfind(lst, 52);
	return 0;
}
