#include "Conversion.hpp"
#include <cstdlib>
#include <cmath>
#include <limits>

Conversion::Conversion(){
//	std::cout << "Conversion Default Constructor Called" << std::endl;
}
Conversion::~Conversion(){
//	std::cout << "Conversion Default Destructor Called" << std::endl;
}
Conversion::Conversion(std::string const s): str(s){
//	std::cout << "Conversion std::string Constructor Called" << std::endl;
}
Conversion::Conversion(Conversion const &r){
//	std::cout << "Conversion Copy Constructor Called" << std::endl;
	*this = r;
}

Conversion &Conversion::operator=(Conversion const &r){
	str = r.str;
	return *this;
}
std::ostream &operator<<(std::ostream &o, Conversion const &rhs){
	(void)rhs;
	return o;
}

bool	Conversion::validConversion(){
	if (isChar() || isInt() || isFloat () || isDouble())
		return true;
	return false;
}

bool	Conversion::isChar(){
	if (str.length() != 1)
		return false;
	if (!isprint(str[0])){
		std::cout << "char: Non displayable" << std::endl;
		return false;
	}
	return true;
}
bool	Conversion::isInt(){
	char	*endPtr = NULL;
	long	l = strtol(str.c_str(), &endPtr, 10);
	if (*endPtr || l > (long)INT_MAX || l < (long)INT_MIN)
		return false;
	return  true;
}
bool	Conversion::isFloat(){
	if (str == "nanf" || str == "inff" || str == "-inff" || str == "+inff")
		return true;
	char	*endPtr = NULL;
	if (str.back() == 'f')
		str.pop_back();
	strtof(str.c_str(), &endPtr);
	if (*endPtr)
		return false;
	return true;
}
bool	Conversion::isDouble(){
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf")
		return true;
	char	*endPtr = NULL;
	if (str.back() == 'f')
		str.pop_back();
	strtod(str.c_str(), &endPtr);
	if (*endPtr)
		return false;
	return true;
}

void	Conversion::printConversions(void){
		printChar();
		printInt();
		printFloat();
		printDouble();
	
}
void	Conversion::printChar(){
	std::cout << "char: ";
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf" ||
		str == "nanf" || str == "inff" || str == "-inff" || str == "+inff"){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (str.length() == 1 && !isdigit(str[0])){
		if (!isprint(str[0])){
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
		return ;
	}
	double	d;
	char	*endPtr = NULL;
	errno = 0;
	d = strtod(str.c_str(), &endPtr);
	if (*endPtr || errno == ERANGE || d < 0 || d > 255){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (!isprint(static_cast<char>(d))){
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}
void	Conversion::printInt(){
	std::cout << "int: ";
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf" ||
		str == "nanf" || str == "inff" || str == "-inff" || str == "+inff"){
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (str.length() == 1 && !isdigit(str[0])){
		std::cout << static_cast<int>(str[0]) << std::endl;
	}
	long	l;
	char	*endPtr = NULL;
	errno = 0;
	l = strtol(str.c_str(), &endPtr, 10);
	if (*endPtr || errno == ERANGE || l < (long)INT_MIN || l > (long)INT_MAX){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(l) << std::endl;
}
void	Conversion::printFloat(){
	std::cout << "float: ";
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf"){
		std::cout << str << "f" << std::endl;
		return ;
	}
	if (str == "nanf" || str == "inff" || str == "-inff" || str == "+inff"){
		std::cout << str << std::endl;
		return ;
	}
	if (str.length() == 1 && !isdigit(str[0])){
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(str[0]) << "f" << std::endl;
		return ;
	}
	float	f;
	char	*endPtr = NULL;
	errno = 0;
	f = strtof(str.c_str(), &endPtr);
	if (*endPtr || errno == ERANGE){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
}
void	Conversion::printDouble(){
	std::cout << "double: ";
	if (str == "nan" || str == "inf" || str == "-inf" || str == "+inf"){
		std::cout << str << std::endl;
		return ;
	}
	if (str == "nanf" || str == "inff" || str == "-inff" || str == "+inff"){
		str.pop_back();
		std::cout << str << std::endl;
		return ;
	}
	if (str.length() == 1 && !isdigit(str[0])){
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(str[0]) << std::endl;
		return ;
	}
	double	d;
	char	*endPtr = NULL;
	errno = 0;
	d = strtod(str.c_str(), &endPtr);
	if (*endPtr || errno == ERANGE){
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << std::setprecision(1) << std::fixed << d << std::endl;

}
