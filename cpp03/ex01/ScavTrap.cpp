#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Default Desctructor Called" << std::endl;
}
ScavTrap(ScavTrap const &){
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap	&operator=(ScavTrap const &r){
	std::cout << "ScavTrap Assignation Operator" << std::endl
	*this = r;
}
		
void		guardGate(){
	
}
