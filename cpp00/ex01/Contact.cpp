#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	//std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	//std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::setIndex(int index){
	Contact::index = index;
}

void	Contact::setfName(std::string str){
	Contact::firstName = str;
}

void	Contact::setlName(std::string str){
	Contact::lastName = str;
}

void	Contact::setNickname(std::string str){
	Contact::nickname = str;
}

void	Contact::setPhone(std::string str){
	Contact::phone = str;
}

void	Contact::setDSecret(std::string str){
	Contact::darkestSecret = str;
}

void	Contact::print10(std::string str){
	int size = str.size();
	std::string temp = str;
	if (size <= 10)
	{
		while (size++ < 10)
			std::cout << " ";
		std::cout << str;
		std::cout << "|";
	}
	else if (size > 10)
	{
		temp.erase(temp.begin() + 9, temp.end());
		std::cout << temp << ".|";
	}
}

void	Contact::getData(int n){
	if (Contact::firstName.empty())
		return ;
	std::cout << "|";
	std::cout << "         " << n << "|";
	Contact::print10(Contact::firstName);
	Contact::print10(Contact::lastName);
	Contact::print10(Contact::nickname);
	std::cout << std::endl;
}

void	Contact::getInfo(void){
	std::cout << "First Name:	" << Contact::firstName << std::endl;
	std::cout << "Last Name:	" << Contact::lastName << std::endl;
	std::cout << "Nickname:	" << Contact::nickname << std::endl;
	std::cout << "Phone Number:	" << Contact::phone << std::endl;
	std::cout << "Darkest Secret:	" << Contact::darkestSecret << std::endl;
}
