#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &other);
		~RadScorpion(void);
		RadScorpion&	operator = (RadScorpion const &other);
};

# endif
