#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];
	public:
		MateriaSource();
		~MateriaSource();
		void		learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const &type);
};

#endif
