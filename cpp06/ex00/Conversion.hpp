#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <fstream>

class Conversion{
	private:
		std::string str;
		Conversion(); //So It cannot be initialized by anyone
		bool	isChar();
		bool	isInt();
		bool	isFloat();
		bool	isDouble();
		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();

	public:
		~Conversion();
		Conversion(Conversion const &);
		Conversion(std::string const s);

		Conversion &operator=(Conversion const &);
		bool	validConversion();
		void	printConversions();
};

std::ostream &operator<<(std::ostream &o, Conversion const &rhs);

#endif
