#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->NumOfZombies = N;
	this->Zombies = new Zombie[this->NumOfZombies];

	std::cout 	<< std::endl;
	for (int i = 0; i < N; i++)
	{
		this->Zombies[i].SetName(randomZombieName());
		this->Zombies[i].SetType(randomZombieType());
		std::cout 	<< "Zombie\t" \
					<< GREEN << Zombies[i].GetName() << NO_COLOR \
					<< "\trise from the dead!" << std::endl;
		sleep(1);
	}
	std::cout 	<< std::endl	<< "\tHORDE OF " \
								<< BOLD_RED << this->NumOfZombies << NO_COLOR \
								<< " ZOMBIES " \
								<< BOLD_RED << "ATTACK" << NO_COLOR \
								<< "!!!" << std::endl << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->NumOfZombies; i++)
		this->Zombies[i].announce();
	std::cout 	<< std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->Zombies;
	std::cout	<< std::endl	<< "\tHORDE OF " \
								<< BOLD_RED << this->NumOfZombies << NO_COLOR \
								<< " ZOMBIES " \
								<< BOLD_RED << "DESTROYED" << NO_COLOR \
								<< "!!!" << std::endl << std::endl;
}
