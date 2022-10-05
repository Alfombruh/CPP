#include "Character.hpp"

Character::Character(void){
	std::cout << "Character Default Constructor Called" << std::endl;
	return;
}

Character::~Character(void){
	std::cout << "Character Default Destructor Called" << std::endl;
}

Character::Character(Character const &r){
	std::cout << "Character Copy Constructor Called" << std::endl;
	*this = r;
}

Character::Character(std::string const s){
	std::cout << "Character Naming Constructor Called" << std::endl;
	name = s;
}

Character	&Character::operator=(Character const &r){
	name = r.getName();
	return *this;
}

std::string	const	&Character::getName()const{
	return name;
}

void				Character::equip(AMateria* m){
	(void) m;
	return ;
}

void				Character::unequip(int idx){
	if (idx > 4 || idx < 1){
		std::cout << "Cannot unequip: only have 4 slots for Materias" << std::endl;
	}
	//free materia N [idx]
	return ;
}

void				Character::use(int idx, ICharacter& target){
	if (idx > 4 || idx < 1){
		std::cout << "Catnnot use: only have 4 slots for Materias" << std::endl;
		return;
	}
	std::cout << target.getName() << std::endl;
	//use Materia in inventory slot number N
	return ;
}
