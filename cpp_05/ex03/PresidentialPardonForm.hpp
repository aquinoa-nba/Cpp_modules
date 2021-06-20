#ifndef	PRESIDENTIAL_PARDON_FORM_HPP
# define	PRESIDENTIAL_PARDON_FORM_HPP

class	Bureaucrat;
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string		_target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string const &);
		PresidentialPardonForm(PresidentialPardonForm const &);
		~PresidentialPardonForm() {}
		void					act(Bureaucrat const &executor) const;
		static Form*			createForm(std::string const &target);
		PresidentialPardonForm&	operator = (PresidentialPardonForm const &);
};

#endif
