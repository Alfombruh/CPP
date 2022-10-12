#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <stdexcept>
#include <iostream>

class Form;

class Bureaucrat{
	private:
		std::string const	name;
		int16_t 			grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat(std::string name, int16_t grade);

		Bureaucrat	&operator=(Bureaucrat const &);
		class GradeToLowException: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "Bureaucrat Grade to High";
				}
		};
		class GradeToHighException: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "Bureaucrat grade to Low";
				}
		};

		std::string	getName()const;
		int16_t	getGrade()const;

		void	IncrementGrade();
		void	DecrementGrade();
		void	executeForm(const Form &form)const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
