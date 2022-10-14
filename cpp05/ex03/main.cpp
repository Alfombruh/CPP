#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	Form *temp;
	try{
		Intern Juan;
		Bureaucrat Jose("Jose Antonio", 1);
		temp = Juan.makeForm("Robotomy Request", "Juan y Medio");
		temp->signForm(Jose);
		temp->execute(Jose);
		delete temp;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		Intern Angel;
		Bureaucrat Paco("Cisquito", 1);
		temp = Angel.makeForm("Presidential Pardon", "Francisquito The Goat");
		temp->signForm(Paco);
		temp->execute(Paco);
		delete temp;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try{
		Intern Luis;
		Bureaucrat Naruto("Nartuo Fumon", 1);
		temp = Luis.makeForm("Shrubbery Creation", "PisosPicados");
		temp->signForm(Naruto);
		temp->execute(Naruto);
		delete temp;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Intern Joss;
		Bureaucrat Bush("Jorgue Arbusto", 1);
		temp = Joss.makeForm("ERROR", "World Trade Center");
		temp->signForm(Bush);
		temp->execute(Bush);
		delete temp;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
