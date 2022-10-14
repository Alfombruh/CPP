#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm: public Form{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &);
		PresidentialPardonForm(std::string const target);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &);

		void	execute(Bureaucrat const &r)const;
		std::string getTarget()const;
};

#endif
