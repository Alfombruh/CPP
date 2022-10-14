#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
	public:
		Intern();
		~Intern();
		Intern(Intern const &);

		Intern &operator=(Intern const &);
		
		Form	*makeForm(std::string name, std::string target);
};

#endif
