#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
    private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phone;
		std::string		darkestSecret;
		int				index;
    public:
		void	setIndex(int index);
		void	setfName(std::string str);
		void	setlName(std::string str);
		void	setNickname(std::string str);
		void	setPhone(std::string str);
		void	setDSecret(std::string str);
		void	getData(int n);
		void	print10(std::string str);
		void	getInfo(void);
        PhoneBook(void);
        ~PhoneBook(void);
};

#endif
