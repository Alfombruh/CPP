#include <iostream>

//For a class to be canonical we have to have a Default constructor and a destructor, a copy constructor and a equal operator
class Sample{
	private:
		int	_foo;

	public:
		Sample(void): _foo(0){
			std::cout << "Default constructor called" << std::endl;
		};							//CANONICAL
		Sample(int const n): _foo(n){
			std::cout << "Parametric constructor called" << std::endl;
		};
		Sample(Sample const & src){
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		};				//CANONICAL
		~Sample(void){
			std::cout << "Destructor called" << std::endl;
		};							//CANONICAL

		Sample &operator=(Sample const &rhs){
			std::cout << "Asignation operator called" << std::endl;
			this->_foo = rhs.getFoo();
			return *this;
		};	//CANONICAL

		int		getFoo(void)const{
			return	this->_foo;
		};
};

std::ostream	&operator<<(std::ostream &o, Sample const &i){
	o << i.getFoo();
	return o;
};

int main(){
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}
