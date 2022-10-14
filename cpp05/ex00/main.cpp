#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat test("Ion Mikel Romero", 150);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test2("Paco Ramon", 151);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test3("Codere", 0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test4("Amancio Ortega", 1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat Pili("La Pili", 150);
		for (int i = 0; i < 30 ; i++){
			std::cout << Pili << std::endl;
			Pili.IncrementGrade();
		}
		for (int i = 0 ; i < 59 ; i++){
			Pili.DecrementGrade();
			std::cout << Pili << std::endl;
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat Charlos("Charlos", 20);
		for (int i = 0; i < 30 ; i++){
			Charlos.DecrementGrade();
			std::cout << Charlos << std::endl;
		}
		for (int i = 0 ; i < 59 ; i++){
			Charlos.IncrementGrade();
			std::cout << Charlos << std::endl;
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
