#include "Intern.hpp"

int		main()
{
	Bureaucrat	brcrt1("Jonathan", 138);
	Bureaucrat	brcrt2("Joseph", 46);
	Bureaucrat	brcrt3("Jotaro", 6);
	// ShrubberyCreationForm	form1("Palm");
	// RobotomyRequestForm		form2("Aquinoa");
	// PresidentialPardonForm	form3("Aquinoa");

	Intern someRandomIntern;
	Form* rrf;

	std::cout << brcrt1;
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf;
		brcrt1.signForm(*rrf);
		std::cout << *rrf;
		brcrt1.executeForm(*rrf);
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
		brcrt1.executeForm(*rrf);

		std::cout << std::endl;

		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << brcrt2 << *rrf;
		brcrt1.signForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		brcrt2.signForm(*rrf);
		std::cout << *rrf;
		brcrt2.executeForm(*rrf);
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
		brcrt2.executeForm(*rrf);

		std::cout << std::endl;

		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << brcrt3 << *rrf;
		brcrt3.signForm(*rrf);
		brcrt3.executeForm(*rrf);
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
		brcrt3.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		delete rrf;
		rrf = someRandomIntern.makeForm("", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
