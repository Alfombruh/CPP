#include "RobotomyRequestForm.hpp"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(void): Form("Robotomy Request Form", 72, 45), target("Default Target"){
	std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm Default Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r){
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
	*this = r;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("Robotomy Request Form", 72, 45), target(target){
	std::cout << "RobotomyRequestForm Assignation Constructor Called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &r){
	target = r.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &r)const{
	r.executeForm(*this);
	int	num;
	
	srand (time(NULL));
	num = rand() % 100;
	if (num % 2 == 0)
		std::cout << getTarget() << " has been robotomized succesfully" << std::endl;
	else
		std::cout << "Robotomy failure" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void)const{
	return target;
}
