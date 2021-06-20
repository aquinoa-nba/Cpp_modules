#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name) { *this = other; }

std::string	Bureaucrat::getName() const { return _name; }

int	Bureaucrat::getGrade() const { return _grade; }

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form &form) const
{
	form.beSigned(*this);
}

Bureaucrat&	Bureaucrat::operator = (Bureaucrat const &other)
{
	_grade = other._grade;
	return *this;
}

std::ostream&	operator << (std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return out;
}
