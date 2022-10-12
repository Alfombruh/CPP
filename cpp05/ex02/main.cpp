#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	std::cout << "\e[1;96m//////FIRST TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign("Jose", 72);
		Bureaucrat exec("POTU", 45);
		PresidentialPardonForm didit("Joxe Mari");
		std::cout << didit << std::endl;
		didit.signForm(sign);
		std::cout << didit << std::endl;
		didit.execute(exec);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << std::endl;
	std::cout << "\e[1;96m//////SECOND TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign("Jose", 71);
		Bureaucrat exec("POTU", 45);
		PresidentialPardonForm didit("Joxe Mari");
		std::cout << didit << std::endl;
		didit.signForm(sign);
		std::cout << didit << std::endl;
		didit.execute(exec);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	return 0;
}
