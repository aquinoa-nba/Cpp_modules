#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{

private:

	int		NumOfZombies;
	Zombie	*Zombies;

public:

			ZombieHorde(int	N);
	void	announce();
			~ZombieHorde();

};

#endif
