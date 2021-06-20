#ifndef	SHRUBBERY_CREATION_FORM_HPP
# define	SHRUBBERY_CREATION_FORM_HPP

class	Bureaucrat;
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_fileName;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string const &);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		~ShrubberyCreationForm() {}
		void					act(Bureaucrat const &executor) const;
		ShrubberyCreationForm&	operator = (ShrubberyCreationForm const &);
		class	openException : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"File not open"NO_COLOR; }
		};
};

#endif
