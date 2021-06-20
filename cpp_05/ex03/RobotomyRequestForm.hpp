#ifndef	ROBOTOMY_REQUEST_FORM_HPP
# define	ROBOTOMY_REQUEST_FORM_HPP

class	Bureaucrat;
# include "Form.hpp"
# include <unistd.h>

class RobotomyRequestForm : public Form
{
	private:
		std::string		_target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string const &);
		RobotomyRequestForm(RobotomyRequestForm const &);
		~RobotomyRequestForm() {}
		void					act(Bureaucrat const &executor) const;
		static Form*			createForm(std::string const &target);
		RobotomyRequestForm&	operator = (RobotomyRequestForm const &);
};

#endif
