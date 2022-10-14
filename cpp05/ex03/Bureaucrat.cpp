#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Bureaucrat"), grade(150){
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat Default Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &r){
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
	*this = r;
}

Bureaucrat::Bureaucrat(std::string name, int16_t grade): name(name), grade(grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat Assignation Constructor Called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &r){
	(std::string)name = r.getName();
	grade = r.grade;
	return *this;
}

std::string	Bureaucrat::getName()const{
	return	name;
}

int16_t		Bureaucrat::getGrade()const{
	return grade;
}

void		Bureaucrat::IncrementGrade(){
	if 	(grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade -= 1;
}

void		Bureaucrat::DecrementGrade(){
	if (1 + grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade += 1;
}

void		Bureaucrat::executeForm(const Form &form)const{
	if (!form.getSignature())
		throw Bureaucrat::FormNotSignedException();
	if (grade > form.getXGrade() || grade > form.getGrade())
		throw Form::UnqualifiedBureaucrat();
	return ;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs){
		o << rhs.getName() << " , bureaucrat grade " << rhs.getGrade();
		return o;
}
