#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string	_type;
	public:
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		void	randomChump();
};

std::string	chosenType(std::string type);

#endif
