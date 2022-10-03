#ifndef AMATERIA_H
#define AMATERIA_H

class Amateria{
	protected:
		//...
	public:
		AMateria();
		~AMateria();
		AMateria(AMateria const &);
		AMateria(std::string const &type);
		std::string const &getType() const;
	
		AMateria &operator=(AMateria const &);

		virtual AMateria *clone()const = 0;
		virtual void use(ICharacter &target);
};

#endif
