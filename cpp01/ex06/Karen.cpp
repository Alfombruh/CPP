#include "Karen.hpp"

Karen::Karen(void){
	//std::cout << "Karen constructor called, Lord have mercy on you" << std::endl;
}

Karen::~Karen(void){
	//std::cout << "Karen destructor called, Lord has brought mercy on us" << std::endl;
}

void	Karen::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love my Massey Ferguson farm tractor model 8S.265, this machine has 265 HorsePower, was made in 2020 and has a Agco Power engine" << std::endl;
	std::cout << std::endl;
}
void	Karen::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I is so crazy that Massey Ferguson is trying to make me pay for more HorsePower. It didn't have enough in the first place! If it did I wouldn't have wanted the 2020 8S.265 instead of the 2020 8S.245" << std::endl;
	std::cout << std::endl;
}
void	Karen::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserver some kind of special treatment at this tractor dealership. I've been coming here for years! You are new at this place, bring someone that knows me!" << std::endl;
	std::cout << std::endl;
}
void	Karen::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is mind boggling, I deserver special treatment not this pedestrian treatment! I want to speak to the dealerships OWNER right now!!!" << std::endl;
	std::cout << std::endl;
}

void	Karen::complain(std::string level){
	uint8_t	i = -1;
	void	(Karen::*f[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	autista[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (++i < 4){
		if (!autista[i].compare(level))
			break;
	}
	switch (i){
		case 0:
			(this->*f[0])();
		case 1:
			(this->*f[1])();
		case 2:
			(this->*f[2])();
		case 3:
			(this->*f[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
	}
	return ;
}
