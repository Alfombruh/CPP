#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain(void){
	std::cout << "Brain Default Destructor Called" << std::endl;
}

Brain::Brain(Brain const &r){
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = r;
}

Brain	&Brain::operator=(Brain const &r){
	std::cout << "is here" << std::endl;
	for (int i = 0; i < 100 && !r.ideas[i].empty(); i++)
		ideas[i] = r.ideas[i];
	return *this;
}
