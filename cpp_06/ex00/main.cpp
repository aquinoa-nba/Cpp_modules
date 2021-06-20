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

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0