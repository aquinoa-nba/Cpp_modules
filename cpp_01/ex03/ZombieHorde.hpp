#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_numOfZombies;
		Zombie	*_zombies;
	public:
		void	announce();
				ZombieHorde(int	numOfZombie);
				~ZombieHorde();
};

#endif
