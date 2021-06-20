#include "Form.hpp"

int		main()
{
	try
	{
		Form	form("Doc", 0, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form	form("Doc", 200, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form	form("Doc", 10, -10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Form	form("Doc", 10, 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat brcrt("Joshua", 4);

		Form	form1("Doc", 10, 5);
		Form	form2("Doc", 1, 5);

		std::cout << brcrt << form1;
		brcrt.signForm(form1);
		form1.beSigned(brcrt);
		std::cout << form1;

		std::cout << std::endl;

		std::cout << form2;
		brcrt.signForm(form2);
		form2.beSigned(brcrt);
		std::cout << form2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
