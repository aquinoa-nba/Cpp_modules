#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: Form("Presidential Pardon", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
	: Form("Presidential Pardon", 25, 5)
{
	*this = other;
}

void	PresidentialPardonForm::act(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator = (PresidentialPardonForm const &other)
{
	(void)other;
	return *this;
}
