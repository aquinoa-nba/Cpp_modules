#include "Fire.hpp"

Fire::Fire() : AMateria("fire") {}

Fire::Fire(Fire const &other) : AMateria("fire") { *this = other; }

Fire::~Fire() {}

Fire*	Fire::clone() const { return new Fire(*this); }

void	Fire::use(ICharacter &target)
{
	std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
}

Fire&	Fire::operator = (Fire const &other)
{
	if (this != &other)
		this->setXP(other.getXP());
	return *this;
}
