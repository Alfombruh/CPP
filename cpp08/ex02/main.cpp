#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <iostream>

int main(int argc, char** argv){
	(void) argv;
	if (argc == 1){
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite){
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	if (argc == 2){
		MutantStack<int> mstack;
		srand(time(NULL));
		int i = rand() % 100;
		while (i-- > 0)
			mstack.push(rand() % 100);
		while(i++ < 100)
			if (rand() % 2 == 0)
				mstack.pop();
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "List is: " << std::endl;
		int k = 0;
		while (it != ite){
			std::cout << *it << ", ";
			++it;
			k++;
		}
		std::cout << "FINISHED" << std::endl;
		std::cout << "k iterator value: " << k << std::endl;
		std::cout << "Size Method Value: " << mstack.size() <<  std::endl;
	}
	return 0;
}
