#include "Form.hpp"

Form::Form(std::string const &name, int const&signGrade, int const&execGrade)
	: _name(name), _signGrade(signGrade), _execGrade(execGrade), _sign(false)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	else if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &other)
	: _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade), _sign(other._sign) {}

std::string		Form::getName() const { return _name; }

int				Form::getSignGrade() const { return _signGrade; }

int				Form::getExecGrade() const { return _execGrade; }

bool			Form::isSigned() const { return _sign; }

void			Form::beSigned(Bureaucrat const &brcrt)
{
	if (_sign == false)
	{
		if (brcrt.getGrade() <= _signGrade)
		{
			_sign = true;
			std::cout << brcrt.getName() << " signs " << _name << std::endl;
		}
		else
		{
			std::cout << brcrt.getName() << " cannot sign " << _name << " because ";
			throw Bureaucrat::GradeTooLowException();
		}
	}
	else
		std::cout << "Form " << _name << " is already signed" << std::endl;
}

Form&			Form::operator = (Form const &other)
{
	_sign = other._sign;
	return *this;
}

std::ostream&	operator << (std::ostream &out, Form const &form)
{
	out << "Form " << form.getName() << (form.isSigned() ? " Signed." : " Unsigned.");
	out << " Grade to sign: " << form.getSignGrade() <<  ". Grade to execute: " << form.getExecGrade() << std::endl;
	return out;
}
