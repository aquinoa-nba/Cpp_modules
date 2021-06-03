#include "ZombieEvent.hpp"

std::string	randomZombieName()
{
	const int	size = 6;
	std::string name[size] = {"Aquinoa", "Keuclide", "Walethea", "Mhumfrey", "Mismene", "Aemustaf"};

	srand(time(NULL));
	return (name[rand() % size]);
}

std::string	randomZombieType()
{
	const int	size = 6;
	std::string type[size] = {"Runner", "Stalker", "Clicker", "Bloater", "Shambler", "Rat King"};

	srand(time(NULL));
	return (type[rand() % size]);
}

std::string	chosenType()
{
	std::string	answer;

	std::cout << std::endl << "Choose the type of zombie (" << PURPLE << "1." << NO_COLOR << "Runner, " \
															<< PURPLE << "2." << NO_COLOR << "Stalker, " \
															<< PURPLE << "3." << NO_COLOR << "Clicker, " \
															<< PURPLE << "4." << NO_COLOR << "Bloater, " \
															<< PURPLE << "5." << NO_COLOR << "Shambler, " \
															<< PURPLE << "6." << NO_COLOR << "Rat King) --> ";
	if (!std::getline(std::cin, answer))
		exit(1);
	if (answer.compare("1") == 0)
		return ("Runner");
	else if (answer.compare("2") == 0)
		return ("Stalker");
	else if (answer.compare("3") == 0)
		return ("Clicker");
	else if (answer.compare("4") == 0)
		return ("Bloater");
	else if (answer.compare("5") == 0)
		return ("Shambler");
	else if (answer.compare("6") == 0)
		return ("Rat King");
	else
	{
		std::cout << std::endl << BOLD_RED << "Wrong type! Try again..." << NO_COLOR << std::endl;
		return (chosenType());
	}
}

int	createZombie(ZombieEvent& zombieEvent)
{
	std::string	answer;

	std::cout << "Do you want to create your own zombie? " << BOLD_GREEN << "Y" << NO_COLOR << "/" << BOLD_RED << "N" << NO_COLOR << " --> ";
	if (!std::getline(std::cin, answer))
		exit(1);
	if (answer.compare("Y") == 0 || answer.compare("y") == 0)
	{
		zombieEvent.setZombieType(chosenType());
		return (YES);
	}
	else if (answer.compare("N") == 0 || answer.compare("n") == 0)
	{
		zombieEvent.randomChump();
	}
	return (NO);
}

int	main()
{
	ZombieEvent zombieEvent;
	Zombie*		zombie;

	if (createZombie(zombieEvent) == YES)
	{
		zombie = zombieEvent.newZombie(randomZombieName());
		zombie->announce();
		delete zombie;
	}
}
