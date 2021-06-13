#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &other);
		~SuperMutant(void);
		void			takeDamage(int damage);
		SuperMutant&	operator = (SuperMutant const &other);
};

# endif
