#include "span.hpp"

/*int main(){
	try{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}*/
int main(){
	try{
		srand(time(NULL));
		int i = rand() % 100;
		Span lst(i);
		while (i-- > 0)
			lst.addNumber(rand() % 100);
		lst.printList();
		std::cout << lst.shortestSpan() << std::endl;
		std::cout << lst.longestSpan() << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
