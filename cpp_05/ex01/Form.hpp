#ifndef FORM_HPP
# define FORM_HPP

class	Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		int	const			_signGrade;
		int	const			_execGrade;
		bool				_sign;
		Form();
	public:
		Form(std::string const &, int const&, int const&);
		~Form() {}
		Form(Form const &);
		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool		isSigned() const;
		void		beSigned(Bureaucrat const &);
		Form&		operator = (Form const &);
		class	GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Form grade too high"NO_COLOR; }
		};
		class	GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Form grade too low"NO_COLOR; }
		};
};

std::ostream&	operator << (std::ostream &, Form const &);

#endif
