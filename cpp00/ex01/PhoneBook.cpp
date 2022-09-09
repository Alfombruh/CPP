#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	//std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	//std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

void	PhoneBook::setIndex(int index){
	PhoneBook::index = index;
}

void	PhoneBook::setfName(std::string str){
	PhoneBook::firstName = str;
}

void	PhoneBook::setlName(std::string str){
	PhoneBook::lastName = str;
}

void	PhoneBook::setNickname(std::string str){
	PhoneBook::nickname = str;
}

void	PhoneBook::setPhone(std::string str){
	PhoneBook::phone = str;
}

void	PhoneBook::setDSecret(std::string str){
	PhoneBook::darkestSecret = str;
}

void	PhoneBook::print10(std::string str){
	int size = str.size();
	std::string temp = str;
	if (size < 10)
	{
		while (size++ < 10)
			std::cout << " ";
		std::cout << str;
		std::cout << "|";
	}
	else if (size >= 10)
	{
		temp.erase(temp.begin() + 9, temp.end());
		std::cout << temp << ".|";
	}
}

void	PhoneBook::getData(int n){
	if (PhoneBook::firstName.empty())
		return ;
	std::cout << "|";
	std::cout << "         " << n << "|";
	PhoneBook::print10(PhoneBook::firstName);
	PhoneBook::print10(PhoneBook::lastName);
	PhoneBook::print10(PhoneBook::nickname);
	std::cout << std::endl;
}

void	PhoneBook::getInfo(void){
	std::cout << "First Name:	" << PhoneBook::firstName << std::endl;
	std::cout << "Last Name:	" << PhoneBook::lastName << std::endl;
	std::cout << "Nickname:	" << PhoneBook::nickname << std::endl;
	std::cout << "Phone Number:	" << PhoneBook::phone << std::endl;
	std::cout << "Darkest Secret:	" << PhoneBook::darkestSecret << std::endl;
}
