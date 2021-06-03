#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void	ZombieEvent::randomChump()
{
	Zombie zombie(randomZombieName(), randomZombieType());
	zombie.announce();
}
