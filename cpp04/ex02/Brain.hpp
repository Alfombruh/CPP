#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{
	std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(Brain const &);

		Brain	&operator=(Brain const &);
};

#endif
