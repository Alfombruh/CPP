#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

void	printValue(int value){
	std::cout << value << std::endl;
}

int main(){
	std::vector<int> lst;

	srand(time(NULL));
	int i = rand() % 100;
	while (i-- > 0){
		lst.push_back(rand() % 100);
	}
	//for_each(lst.begin(), lst.end(), printValue);
	try{
		std::vector<int>::iterator it = easyfind(lst, 52);
		std::cout << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
