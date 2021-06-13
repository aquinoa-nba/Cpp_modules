#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &other) : AMateria("ice") { *this = other; }

Ice::~Ice() {}

Ice*	Ice::clone() const { return new Ice(*this); }

void	Ice::use(ICharacter &target) { std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; }

Ice&	Ice::operator = (Ice const &other)
{
	if (this != &other)
		this->setXP(other.getXP());
	return *this;
}
