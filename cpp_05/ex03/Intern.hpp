#ifndef	INTERN_HPP
# define	INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		class	FormsGenerator
		{
			private:
				std::string		_formName;
				Form*			(*_func)(std::string const &);
				FormsGenerator();
			public:
				FormsGenerator(std::string const &, Form* (func)(std::string const &));
				FormsGenerator(FormsGenerator const &);
				~FormsGenerator() {};
				bool			checkName(std::string const &);
				Form*			makeFunc(std::string const &);
				FormsGenerator&	operator = (FormsGenerator const &);
		};
		FormsGenerator		*_formArr[9];
		class		WrongFormName : public std::exception
		{
			virtual const char* what() const throw() { return B_RED"Wrong form"NO_COLOR; }
		};
	public:
		Intern();
		Intern(Intern const &);
		~Intern();
		Form*	makeForm(std::string const &, std::string const &);
		Intern&	operator = (Intern const &);
};

#endif
