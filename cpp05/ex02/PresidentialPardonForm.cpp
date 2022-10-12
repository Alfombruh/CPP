#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Presidential Pardon Form", 72, 45), target("Default Target"){
	std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm Default Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &r){
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
	*this = r;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("Presidential Pardon Form", 72, 45), target(target){
	std::cout << "PresidentialPardonForm Assignation Constructor Called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &r){
	target = r.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &r)const{
	r.executeForm(*this);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void)const{
	return target;
}
