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

//CORRECTION MAIN//
/*
class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
	Awesome tab2[5];
	iter( tab, 5, print ); 
	iter( tab2, 5, print );
	return 0;
}*/
