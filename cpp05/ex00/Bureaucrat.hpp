#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
	private:
		const std::string name;
		uint8_t grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat(std::string name, uint8_t grade);

		Bureaucrat	&operator=(Bureaucrat const &);
		
		void	GradeToLowException()const;
		void	GradeToHighException()const;

		std::string	getName()const;
		uint8_t	getGrade()const;

		void	IncrementGrade(int8_t i);
		void	DecrementGrade(int8_t d);
}

#endif
