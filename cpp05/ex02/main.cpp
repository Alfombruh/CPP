#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	std::cout << "\e[1;96m//////FIRST TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign("Jose", 25);
		Bureaucrat exec("POTU", 5);
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
		Bureaucrat sign2("Jose", 24);
		Bureaucrat exec2("POTU", 5);
		PresidentialPardonForm didit2("Joxe Mari");
		std::cout << didit2 << std::endl;
		didit2.signForm(sign2);
		std::cout << didit2 << std::endl;
		didit2.execute(exec2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << std::endl;
	std::cout << "\e[1;96m//////THRIRD TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat arb("Putero", 145);
		Bureaucrat gardener("Bejo", 137);
		ShrubberyCreationForm tree("Fortnite");
		std::cout << tree << std::endl;
		tree.signForm(arb);
		std::cout <<  tree << std::endl;
		tree.execute(gardener);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////FOURTH TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat dude("Random", 146);
		Bureaucrat dude2("Aitana", 137);
		ShrubberyCreationForm thing("Formentera");
		std::cout << thing << std::endl;
		thing.signForm(dude);
		std::cout <<  thing << std::endl;
		thing.execute(dude2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////FITH TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob("Pussy", 72);
		Bureaucrat psc("Shrink", 45);
		RobotomyRequestForm patient("Anthony Soprano");
		std::cout << patient << std::endl;
		patient.signForm(mob);
		std::cout <<  patient << std::endl;
		patient.execute(psc);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////SIXTH TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob2("Pussy", 72);
		Bureaucrat psc2("Shrink", 46);
		RobotomyRequestForm patient2("Anthony Soprano");
		std::cout << patient2 << std::endl;
		patient2.signForm(mob2);
		std::cout <<  patient2 << std::endl;
		patient2.execute(psc2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////SEVENTH TRY//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob3("Pussy", 72);
		Bureaucrat psc3("Shrink", 46);
		RobotomyRequestForm patient3("Anthony Soprano");
		std::cout << patient3 << std::endl;
		patient3.execute(psc3);
		std::cout <<  patient3 << std::endl;
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
