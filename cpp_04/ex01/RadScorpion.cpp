#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion")
{
	std::cout << B_RED "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other) : Enemy(80, "Rad Scorpion")
{
	*this = other;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << B_RED "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator = (RadScorpion const &other)
{
	if (this != &other)
	{
		_hp = other._hp;
		_type = other._type;
	}
	return *this;
}
