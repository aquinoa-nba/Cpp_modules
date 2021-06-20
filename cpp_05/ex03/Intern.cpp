#include "Intern.hpp"

Intern::FormsGenerator::FormsGenerator(std::string const &formName, Form *(func)(std::string const &))
	: _formName(formName), _func(func) {}

Intern::FormsGenerator::FormsGenerator(FormsGenerator const &other) { *this = other; }

bool	Intern::FormsGenerator::checkName(std::string const &formName) { return _formName == formName; }

Form*	Intern::FormsGenerator::makeFunc(std::string const &target) { return _func(target); }

Intern::FormsGenerator&	Intern::FormsGenerator::operator = (FormsGenerator const &other)
{
	_formName = other._formName;
	_func = other._func;
	return *this;
}

Intern::Intern()
{
	this->_formArr[0] = new FormsGenerator("shrubbery creation", ShrubberyCreationForm::createForm);
	this->_formArr[1] = new FormsGenerator("Shrubbery creation", ShrubberyCreationForm::createForm);
	this->_formArr[2] = new FormsGenerator("Shrubbery Creation", ShrubberyCreationForm::createForm);
	this->_formArr[3] = new FormsGenerator("robotomy request", RobotomyRequestForm::createForm);
	this->_formArr[4] = new FormsGenerator("Robotomy request", RobotomyRequestForm::createForm);
	this->_formArr[5] = new FormsGenerator("Robotomy Request", RobotomyRequestForm::createForm);
	this->_formArr[6] = new FormsGenerator("presidential pardon", PresidentialPardonForm::createForm);
	this->_formArr[7] = new FormsGenerator("Presidential pardon", PresidentialPardonForm::createForm);
	this->_formArr[8] = new FormsGenerator("Presidential Pardon", PresidentialPardonForm::createForm);
}

Intern::Intern(Intern const &other) { (void)other;}

Intern::~Intern()
{
	for (int i = 0; i < 9; i++)
		delete _formArr[i];
}

Form*	Intern::makeForm(std::string const &formName, std::string const &target)
{

	for(int i = 0; i < 9; i++)
	{
		if (_formArr[i]->checkName(formName) == true)
		{
			std::cout << B_GREEN"Intern"NO_COLOR" creates " << formName << std::endl;
			return _formArr[i]->makeFunc(target);
		}
	}
	throw WrongFormName();
}

Intern&	Intern::operator = (Intern const &other)
{
	(void)other;
	return *this;
}
