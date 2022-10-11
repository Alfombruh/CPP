#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>

class Bureaucrat{
	private:
		std::string const	name;
		uint8_t 			grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat(std::string name, uint8_t grade);

		Bureaucrat	&operator=(Bureaucrat const &);
		class GradeToLowException: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "kys";
				}
		};
		class GradeToHighException: public std::exception{
			public:
				virtual const char *what()const throw(){
					return "kys2";
				}
		};
		std::string	getName()const;
		uint8_t	getGrade()const;

		void	IncrementGrade();
		void	DecrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
