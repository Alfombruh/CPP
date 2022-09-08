#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#define N 8

int main()
{
	int			i = 0;
    PhoneBook Contacs[N];
	std::string input;
	
	while(1)
	{
		std::cout << ">";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			Contacs[i].setIndex(i);
			std::cout << "Adding a new contact...	" << std::endl;
			std::cout << "First Name:	";
			std::getline(std::cin, input);
			Contacs[i].setfName(input);
			std::cout << "Last Name:	";
			std::getline(std::cin, input);
			Contacs[i].setlName(input);
			std::cout << "Nickname:	";
			std::getline(std::cin, input);
			Contacs[i].setNickname(input);
			std::cout << "Phone Number:	";
			std::getline(std::cin, input);
			Contacs[i].setPhone(input);
			std::cout << "Darkest Secret:	";
			std::getline(std::cin, input);
			Contacs[i].setDSecret(input);
			i++;
			if (i >= N)
				i = 0;
		}
		else if (!input.compare("SEARCH"))
		{
			//if (i == 0)
			//	std::cout << "You have no friends >:(" << std::endl;
			//else {
				std::cout << "|  Index   |First name| Last name| Nickname |" << std::endl;
				for (int j = 0 ; j < N ; ++j)
					Contacs[j].getData(j);
				std::cout << "Index of the contact:	";
				std::getline(std::cin, input);
				if (std::isdigit(input[0]))
					for (int j = 0; j < N ; ++j)
						if (j == std::atoi(input.c_str()))
							Contacs[j].getInfo();
			//}
		}
		else if (!input.compare("EXIT")){
			std::cout << "EXIT OPTION" << std::endl;
			break;
		}
	}
    return 0;
}
