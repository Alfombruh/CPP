#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*src[2];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const &);

		MateriaSource	&operator=(MateriaSource const &);

		virtual void			learnMateria(AMateria*);
		virtual AMateria* 		createMateria(std::string const & type);
};
#endif
