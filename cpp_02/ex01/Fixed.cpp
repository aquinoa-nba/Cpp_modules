#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = value << _fractional;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(value * (1 << _fractional));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

Fixed& Fixed::operator = (Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = other.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(_rawBits) / (1 << _fractional);
}

int		Fixed::toInt(void) const
{
	return _rawBits >> _fractional;
}

std::ostream& operator << (std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return out;
}
