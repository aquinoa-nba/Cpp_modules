#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
	: Form("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
	: Form("Shrubbery Creation", 72, 45)
{
	*this = other;
}

void	RobotomyRequestForm::act(Bureaucrat const &executor) const
{
	(void)executor;
	srand(time(NULL));
	std::cout << "Zhzh..." << std::endl;
	sleep(1);
	std::cout << "Bzhzh..." << std::endl;
	sleep(1);
	std::cout << "Vzhzhzh..." << std::endl;
	if ((rand() % 100) > 50)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " has't been robotomized" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (RobotomyRequestForm const &other)
{
	(void)other;
	return *this;
}
