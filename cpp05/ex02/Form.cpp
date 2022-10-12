#include "Form.hpp"

Form::Form(void): name("Form"), rGrade(150), xGrade(0),signature(false){
	std::cout << "Form Default Constructor Called" << std::endl;
}

Form::~Form(void){
	std::cout << "Form Default Destructor Called" << std::endl;
}

Form::Form(std::string const name, int16_t const grade, int16_t xgrade): name(name), rGrade(grade), xGrade(xgrade),signature(false){
	if (rGrade < 1)
		throw GradeToHighException();
	else if (rGrade > 150)
		throw GradeToLowException();
	std::cout << "Form Assignation Constructor Called" << std::endl;
}

Form::Form(Form const &r):name(r.name), rGrade(r.rGrade), xGrade(r.xGrade), signature(r.signature){
	std::cout << "Form Copy Constructor Called" << std::endl;
	*this = r;
}

Form	&Form::operator=(Form const &r){
	(std::string)name = r.name;
	signature = r.signature;
	return *this;
}

std::string Form::getName(void)const{
	return name;
}

int16_t		Form::getGrade(void)const{
	return rGrade;
}
int16_t		Form::getXGrade()const{
	return xGrade;
}

bool		Form::getSignature(void)const{
	return signature;
}

void	Form::signForm(const Bureaucrat &r){
	if (rGrade < r.getGrade())
		throw Form::GradeToLowException();
	else if (rGrade > r.getGrade()) 
		throw Form::GradeToHighException();
	else
		signature = true;
}

void 	Form::execute(const Bureaucrat &executor)const{
	executor.executeForm(*this);
	std::cout << "Basic form was executed" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs){
	o << "Form " << rhs.getName() << " requires a grade of: " << rhs.getGrade() << " and the signature is: " << rhs.getSignature();
	return o;
}
