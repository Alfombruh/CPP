#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrubbery Creation Form", 145, 137), target("Default Target"){
	std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm Default Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &r){
	std::cout << "ShrubberyCreationForm Copy Constructor Called" << std::endl;
	*this = r;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form("Shrubbery Creation Form", 145, 137), target(target){
	std::cout << "ShrubberyCreationForm Assignation Constructor Called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &r){
	target = r.target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &r)const{
	r.executeForm(*this);
	std::string filename;
	filename = getTarget() + "_shrubbery";
	std::ofstream	os(filename);
	os << "ASCII TREE" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void)const{
	return target;
}
