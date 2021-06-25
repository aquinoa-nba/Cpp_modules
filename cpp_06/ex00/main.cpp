#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
		std::cerr << "Wrong nbr of args" << std::endl;
	else
	{
		Convert		value(av[1]);
		std::cout << value;
	}
}
