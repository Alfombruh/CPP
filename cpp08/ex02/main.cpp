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
		int temp = i;
		if (i == 0)
			return (1);
		std::cout << "size is gonna be " << i << std::endl << "list	:";
		while (i-- > 0){
			int pijorrio = rand() % 100;
			std::cout << pijorrio << ", ";
			mstack.push(pijorrio);
		}
		std::cout << std::endl;
		while(++i < temp){
			if (rand() % 2 == 0)
				mstack.pop();
		}
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
/*	if (argc == 3){
		MutantStack<int> mstack;
		srand(time(NULL));
		int i = 1;
		int temp = i;
		std::cout << "size is gonna be " << i << std::endl << "list	:";
		while (i-- > 0){
			int pijorrio = rand() % 100;
			std::cout << pijorrio << ", ";
			mstack.push(pijorrio);
		}
		std::cout << std::endl;
		while(++i < temp){
			if (rand() % 2 == 0)
				mstack.pop();
		}
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
	}*/
	return 0;
}
