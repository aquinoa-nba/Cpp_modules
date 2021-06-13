#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &other) : AMateria("cure") { *this = other; }

Cure::~Cure() {}

Cure*	Cure::clone() const { return new Cure(*this); }

void	Cure::use(ICharacter &target) { std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl; }

Cure&	Cure::operator = (Cure const &other)
{
	if (this != &other)
		this->setXP(other.getXP());
	return *this;
}
