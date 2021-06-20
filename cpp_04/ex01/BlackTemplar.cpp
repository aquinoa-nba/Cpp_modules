#include "BlackTemplar.hpp"

BlackTemplar::BlackTemplar(void) : Enemy(80, "Black Templar")
{
	std::cout << B_RED "Constructor for Black Templar" << std::endl;
}

BlackTemplar::BlackTemplar(BlackTemplar const &other) : Enemy(80, "Black Templar")
{
	*this = other;
}

BlackTemplar::~BlackTemplar(void)
{
	std::cout << "Destructor for Black Templar" << std::endl;
}

BlackTemplar&	BlackTemplar::operator = (BlackTemplar const &other)
{
	if (this != &other)
	{
		_hp = other._hp;
		_type = other._type;
	}
	return *this;
}
