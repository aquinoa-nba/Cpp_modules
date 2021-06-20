#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define	B_RED		"\033[1;31m"
# define	NO_COLOR	"\033[0m"

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
		class		GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Grade too hight"NO_COLOR; }
		};
		class		GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Grade too low"NO_COLOR; }
		};
		Bureaucrat& operator = (Bureaucrat const &other);
};

std::ostream&	operator << (std::ostream &, Bureaucrat const &);

#endif
