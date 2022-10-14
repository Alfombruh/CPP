#include "Intern.hpp"

Intern::Intern(void){
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern(void){
	std::cout << "Intern Default Destructor Called" << std::endl;
}

Intern::Intern(Intern const &r){
	std::cout << "Intern Copy Constructor Called" << std::endl;
	*this = r;
}

Intern	&Intern::operator=(Intern const &r){
	(void) r;
	return *this;
}

typedef	Form *(*ptr)(std::string name);

typedef struct s_form{
	ptr	p;
	std::string str;
} t_form;

static Form	*createShrubbery(std::string name){
	std::cout << "Intern creates " << name << std::endl;
	return (new ShrubberyCreationForm(name));
}

static Form	*createRobotomy(std::string name){
	std::cout << "Intern creates " << name << std::endl;
	return (new RobotomyRequestForm(name));
}

static Form	*createPardon(std::string name){
	std::cout << "Intern creates " << name << std::endl;
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(std::string const name, std::string const target){
	t_form ptr[3];
	
	ptr[0].p = &createShrubbery;
	ptr[0].str = "Shrubbery Creation";
	ptr[1].p = &createRobotomy;
	ptr[1].str = "Robotomy Request";
	ptr[2].p = &createPardon;
	ptr[2].str = "Presidential Pardon";
	for (int i = 0; i < 3 ; i++){
		if (!ptr[i].str.compare(name))
			return (ptr[i].p(target));
	}
	throw Form::EmptyFormType();
	return NULL;
}
