#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
	: _name(name), _title(title)
{
	std::cout << _name << ", "  << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other) { *this = other; }

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string	Sorcerer::getName(void) const { return _name; }

std::string Sorcerer::getTitle(void) const { return _title; }

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

Sorcerer& Sorcerer::operator = (Sorcerer const &sorcerer)
{
	if (this != &sorcerer)
	{
		_name = sorcerer._name;
		_title = sorcerer._title;
	}
	return *this;
}

std::ostream& operator << (std::ostream &out, Sorcerer const &other)
{
	out << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}
