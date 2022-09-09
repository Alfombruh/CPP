#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
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
        Contact(void);
        ~Contact(void);
};

#endif
