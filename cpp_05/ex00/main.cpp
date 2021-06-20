#include "Bureaucrat.hpp"

int		main()
{
	try
	{
		Bureaucrat brcrt("Joshua", 0);
		brcrt.incrementGrade();
		brcrt.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat brcrt("Joshua", 151);
		brcrt.decrementGrade();
		brcrt.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat brcrt("Joshua", 5);
		while (1)
		{
			std::cout << brcrt;
			brcrt.incrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat brcrt("Joshua", 146);
		while (1)
		{
			std::cout << brcrt;
			brcrt.decrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

