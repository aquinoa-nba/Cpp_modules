#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), _type(type) {}

AMateria::AMateria(AMateria const &other) { *this = other; }

AMateria::~AMateria() {}

std::string	const & AMateria::getType() const { return _type; }

unsigned int	AMateria::getXP() const { return _xp; }

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}

void	AMateria::setXP(unsigned int xp) { _xp = xp; }

AMateria& AMateria::operator = (AMateria const &other)
{
	if (this != &other)
	{
		_xp = other._xp;
		_type = other._type;
	}
	return *this;
}
