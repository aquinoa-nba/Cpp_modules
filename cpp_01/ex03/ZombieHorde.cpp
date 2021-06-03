#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int numOfZombie)
{
	_numOfZombies = numOfZombie;
	_zombies = new Zombie[_numOfZombies];

	std::cout 	<< std::endl;
	for (int i = 0; i < _numOfZombies; i++)
	{
		_zombies[i].setName(randomZombieName());
		_zombies[i].setType(randomZombieType());
		std::cout << "Zombie\t" GREEN << _zombies[i].getName() << NO_COLOR \
							"\trise from the dead!" << std::endl;
		sleep(1);
	}
	std::cout << std::endl << "\tHORDE OF " BOLD_RED << _numOfZombies << NO_COLOR \
								" ZOMBIES " BOLD_RED "ATTACK" NO_COLOR "!!!" \
									<< std::endl << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < _numOfZombies; i++)
		_zombies[i].announce();
	std::cout 	<< std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
	std::cout << std::endl << "\tHORDE OF " BOLD_RED << _numOfZombies << NO_COLOR \
								" ZOMBIES " BOLD_RED << "DESTROYED" << NO_COLOR "!!!" \
									<< std::endl << std::endl;
}
