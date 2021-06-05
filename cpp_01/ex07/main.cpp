#include "Replace.hpp"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		Replace replace(av[1], av[2], av[3]);

		if (replace.checker() == true)
			replace.replacer();
	}
	else
		std::cout << B_RED "Wrong number of args..." << std::endl;
}
