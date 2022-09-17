#include <iostream>

class	Sample{
	private:

	public:

		Sample(void){
			std::cout << "Sample constructor called" << std::endl;
		};
		~Sample(void){
			std::cout << "Sample destructor called" << std::endl;
		};
		void bar(char const c)const{
			std::cout << "Member function bar called with char overload :	" << c << std::endl;
		};
		void bar(int const n)const{
			std::cout << "Member function bar called with int overload :	" << n << std::endl;
		};
		void bar(float const z)const{
			std::cout << "Member function bar called with float overload :	" << z << std::endl;
		};
		void	bar(Sample const &i)const{
			std::cout << "Member function bar called with Sample overload" << std::endl;
		};
};

int main(){
	Sample	sample;
	sample.bar('c');
	sample.bar(2);
	sample.bar(3.14f);
	sample.bar((Sample const &)sample);
	return 0;
}
