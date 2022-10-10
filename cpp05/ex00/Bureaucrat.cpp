#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name(Bureaucrat), grade(0){
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &r){
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
	*this = r;
}

Bureaucrat::Bureaucrat(std::string name, uint8_t grade): name(name), grade(grade){
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
	//exceptions
	*this = r;
}

Bureaucrat	*Bureaucrat::operator=(Bureaucrat const &r){
	name = r.name;
	grade = r.grade;
	return *this;
}


void		Bureaucrat::GradeToLowException(void)const{


}
void		Bureaucrat::GradeToHighException(void)const{

}

std::string	Bureaucrat::getName()const{

}

uint8_t		Bureaucrat::getGrade()const{

}

void		Bureaucrat::IncrementGrade(int8_t i){

}
void		Bureaucrat::DecrementGrade(int8_t d){

}

