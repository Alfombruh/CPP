#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat test("Ion Mikel Romero", 150);
	}
	catch(Bureaucrat::GradeToLowException &e){
		std::cout << "GradeToLowExepction" << std::endl;
		return 1;
	}
	catch(Bureaucrat::GradeToHighException &e){
		std::cout << "GradeToHighExepction" << std::endl;
		return 1;
	}
	catch (std::exception &e){
		std::cout << "Another Exception" << std::endl;
		return 1;
	}
	return 0;
}
