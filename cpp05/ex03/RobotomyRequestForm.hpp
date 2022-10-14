#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm: public Form{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm(std::string const target);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &);

		void	execute(Bureaucrat const &r)const;
		std::string getTarget()const;
};

#endif
