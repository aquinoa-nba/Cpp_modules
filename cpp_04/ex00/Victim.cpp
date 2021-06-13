#include "Victim.hpp"

Victim::Victim(std::string const &name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
{
	*this = other;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName(void) const
{
	return _name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim& Victim::operator = (Victim const &other)
{
	if (this != &other)
		_name = other._name;
	return *this;
}

std::ostream& operator << (std::ostream &out, Victim const &victim)
{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return out;
}
