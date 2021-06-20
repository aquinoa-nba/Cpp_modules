#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# define	B_RED		"\033[1;31m"
# define	NO_COLOR	"\033[0m"
class	Form;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const &, int const &);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat() {}
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &) const;
		Bureaucrat& operator = (Bureaucrat const &other);
		class		GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Bureaucrat grade too high"NO_COLOR; }
		};
		class		GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Bureaucrat grade too low"NO_COLOR; }
		};
};

std::ostream&	operator << (std::ostream &, Bureaucrat const &);

#endif
