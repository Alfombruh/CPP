#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const	name;
		int			const	rGrade;
		int			const	xGrade;
		bool				signature;
	public:
		Form();
		virtual ~Form();
		Form(std::string const name, int16_t grade, int16_t xgrade);
		Form(Form const &r);

		Form	&operator=(Form const &r);

		class GradeTooLowException: public std::exception{
			virtual const char *what() const throw(){
				return "Form's grade is too low (lowest: 150)";
			}
		};
		class GradeTooHighException: public std::exception{
			virtual const char *what() const throw(){
				return "Form's grade is too high (highest: 1)";
			}
		};
		class UnqualifiedBureaucrat: public std::exception{
			virtual	const char *what() const throw(){
				return "Bureaucrat is unqualified for the form";
			}
		};
		class EmptyFormType: public std::exception{
			virtual	const char *what() const throw(){
				return "That form type does not exist";
			}
		};

		std::string getName()const;
		int16_t		getGrade()const;
		int16_t		getXGrade()const;
		bool		getSignature()const;
		void		signForm(const Bureaucrat &r);
		virtual void		execute(const Bureaucrat &executor)const;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
