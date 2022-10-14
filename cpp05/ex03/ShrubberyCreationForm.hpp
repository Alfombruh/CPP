#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class ShrubberyCreationForm: public Form{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm(std::string const target);

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

		void	execute(Bureaucrat const &r)const;
		std::string getTarget()const;
};

#endif
