#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(Fire const &other);
		~Fire();
		Fire*	clone() const;
		void	use(ICharacter &target);
		Fire&	operator = (Fire const &other);
};

#endif
