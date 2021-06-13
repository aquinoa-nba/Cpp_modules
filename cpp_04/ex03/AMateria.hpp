#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

class ICharacter;

# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
	protected:
		void				setXP(unsigned int);
		AMateria();
	private:
		unsigned int		_xp;
		std::string			_type;
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &other);
		virtual ~AMateria();
		std::string const	&getType() const;
		unsigned int		getXP() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
		AMateria&			operator = (AMateria const &other);
};

#endif
