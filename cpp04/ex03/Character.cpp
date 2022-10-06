#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(void){
	std::cout << "Character Default Constructor Called" << std::endl;
	name = "Paco Sanz";
	materia_count = 0;
	this->inv[0] = NULL;
	this->inv[1] = NULL;
	this->inv[2] = NULL;
	this->inv[3] = NULL;
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
	materia_count = 0;
	name = s;
}

Character	&Character::operator=(Character const &r){
	materia_count = r.materia_count;
	name = r.getName();
	this->inv[0] = r.inv[0];
	this->inv[1] = r.inv[1];
	this->inv[2] = r.inv[2];
	this->inv[3] = r.inv[3];
	return *this;
}

std::string	const	&Character::getName()const{
	return name;
}

void				Character::equip(AMateria* m){
	if (materia_count > 3){
		std::cout << "Cannot equip that materia kys" << std::endl;
		return;
	}
	inv[materia_count] = m;
	materia_count++;
}

void				Character::unequip(int idx){
	if (idx > 4 || idx < 1){
		std::cout << "Cannot unequip: only have 4 slots for Materias" << std::endl;
		return ;
	}
	this->inv[idx - 1] = NULL;
	return ;
}

void				Character::use(int idx, ICharacter& target){
	if ((idx > 3 || idx < 0) || !inv[idx]){
		std::cout << "Cannot use: only have 4 slots for Materias" << std::endl;
		return;
	}
	inv[idx]->use(target);
	return ;
}
