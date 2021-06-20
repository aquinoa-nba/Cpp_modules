#ifndef BLACK_TEMPLAR_HPP
# define BLACK_TEMPLAR_HPP

# include "Enemy.hpp"

class BlackTemplar : public Enemy
{
	private:
	public:
		BlackTemplar(void);
		BlackTemplar(BlackTemplar const &other);
		~BlackTemplar(void);
		BlackTemplar&	operator = (BlackTemplar const &other);
};

# endif
