#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	Bureaucrat	brcrt1("Jonathan", 138);
	Bureaucrat	brcrt2("Joseph", 46);
	Bureaucrat	brcrt3("Jotaro", 6);
	ShrubberyCreationForm	form1("Palm");
	RobotomyRequestForm		form2("Aquinoa");
	PresidentialPardonForm	form3("Aquinoa");

	std::cout << brcrt1 << form1;
	try
	{
		brcrt1.signForm(form1);
		std::cout << form1;
		brcrt1.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		brcrt1.incrementGrade();
		std::cout << brcrt1;
		brcrt1.executeForm(form1);

		std::cout << std::endl;

		std::cout << brcrt2 << form2;
		brcrt1.signForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		brcrt2.signForm(form2);
		std::cout << form2;
		brcrt2.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		brcrt2.incrementGrade();
		std::cout << brcrt2;
		brcrt2.executeForm(form2);

		std::cout << std::endl;

		std::cout << brcrt3 << form3;
		brcrt3.signForm(form3);
		brcrt3.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		brcrt3.incrementGrade();
		std::cout << brcrt3;
		brcrt3.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
