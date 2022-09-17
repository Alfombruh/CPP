#include <iostream>

class Integer{
	private:
		int _n;

	public:
		Integer(int const n): _n(n){
			std::cout << "Integer constructor called with this value:	" << n << std::endl;
		};
		~Integer(void){
			std::cout << "Integer destructor called with this value:	" << this->_n << std::endl;
		}
		int	getValue(void)const{
			return this->_n;
		};

		Integer &	operator=(Integer const & rhs){
			std::cout << "Assignation operator called from " << this->_n;
			std::cout << " to " << rhs.getValue() << std::endl;

			this->_n = rhs.getValue();
			return	*this;
		};
		Integer 	operator+(Integer const & rhs)const{
			std::cout << "Addition operator called with " << this->_n;
			std::cout << " and " << rhs.getValue() << std::endl;

			return Integer(this->_n +rhs.getValue());
		};

};

std::ostream & operator <<(std::ostream & o, Integer const & rhs){
	o << rhs.getValue();
	return o;
};

int main(){
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of x :	" << x << std::endl;
	std::cout << "Value of y :	" << y << std::endl;
	y = Integer(12);
	std::cout << "Value of y :	" << y << std::endl;

	std::cout << "Value of z :	" << z << std::endl;
	z = x + y;
	std::cout << "Value of z :	" << z << std::endl;

	return 0;
}
