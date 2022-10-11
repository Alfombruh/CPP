#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try{
		Bureaucrat test("Ion Mikel Romero", 69);
		Bureaucrat Armani("Chico Blanco", 150);
		Bureaucrat Fekka("Tango", 50);
		Bureaucrat Mishagi("Kobe Briant", 1);
		Bureaucrat Party("Zoom Zoom", 107);
		Form Trabajo("Sexador de Pollos", 69);
		Form Trabajo1("Pelele", 150);
		Form Trabajo2("Manporrero", 50);
		Form Trabajo3("Rockstar", 1);
		Form Trabajo4("Expert on HTML", 107);
		std::cout << Trabajo << std::endl;
		std::cout << Trabajo1 << std::endl;
		std::cout << Trabajo2 << std::endl;
		std::cout << Trabajo3 << std::endl;
		std::cout << Trabajo4 << std::endl;
		Trabajo.signForm(test);
		std::cout << Trabajo << std::endl;
		Trabajo1.signForm(Armani);
		std::cout << Trabajo1 << std::endl;
		Trabajo2.signForm(Fekka);
		std::cout << Trabajo2 << std::endl;
		Trabajo3.signForm(Mishagi);
		std::cout << Trabajo3 << std::endl;
		Trabajo4.signForm(Party);
		std::cout << Trabajo4 << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------BY THIS POINT NO EXCEPTION MUST HAVE BEEN THROWN----------- \033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error("Unai Martin Marante Gracia Gutierrez Primero", 420);
		Form noterror("DJ Sonora", 70);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS BUREAUCRAT SHOUDL DISPLAY A GRADE TO LOW ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error1("URDULIZ", 0);
		Form	inutil("Estudiante de ADE", 33);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS BUREAUCRAT SHOUDL DISPLAY A GRADE TO HIGH ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error2("URDULIZ", 1);
		Form	inutil("Estudiante de ADE", 333);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS FORM SHOUDL DISPLAY A GRADE TO LOW ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error3("URDULIZ", 1);
		Form	inutil("Estudiante de ADE", 0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS FORM SHOUDL DISPLAY A GRADE TO HIGH ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	return 0;
}
