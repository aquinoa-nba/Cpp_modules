#include "ZombieHorde.hpp"

std::string	randomZombieName()
{
	const int	size = 6;
	std::string name[size]	= {"Aquinoa ", "Keuclide", "Walethea", \
								"Mhumfrey", "Mismene ", "Aemustaf"};

	srand(time(NULL));
	return (name[rand() % size]);
}

std::string	randomZombieType()
{
	const int	size = 6;
	std::string type[size]	= {"Runner", "Stalker", "Clicker", \
								"Bloater", "Shambler", "Rat King" };

	srand(time(NULL));
	return (type[rand() % size]);
}

void	make_horde(int numOfZombie)
{
	ZombieHorde	zombieHorde(numOfZombie);

	sleep(1);
	zombieHorde.announce();
	sleep(1);
}

int		main()
{
	std::string	answer;

	std::cout << std::endl << "Size of the horde?" WHITE " (1-6) " NO_COLOR "--> ";
	if (!std::getline(std::cin, answer))
		exit(1);
	if (!answer.compare("1") || !answer.compare("2") || !answer.compare("3") || \
		!answer.compare("4") || !answer.compare("5") || !answer.compare("6"))
		make_horde(stoi(answer));
	else
	{
		std::cout << std::endl << BOLD_RED "Wrong size..." NO_COLOR << std::endl;
		main();
	}
}
