#include "Convert.hpp"

int	Convert::parser(std::string const &str)
{
	std::string::const_iterator i = str.begin();
	for (; i != str.end(); i++)
	{
		if (!std::isdigit(*i))
		{
			if (str.length() != 1)
			{
				if (*i != '.')
				{
					if (i == str.begin() && (*i == '-' || *i == '+'))
						i++;
					else
						return NO_TYPE;
				}
				else
					break ;
			}
			else if (str[0] > 32 && str[0] < 127)
			{
				_charValue = str[0];
				return CHAR;
			}
		}
	}
	if (i == str.end())
	{
		_intValue = std::stoi(str);
		return INT;
	}
	else if (*i == '.')
	{
		i++;
		for (; i != str.end(); i++)
		{
			if (!std::isdigit(*i))
			{
				if (*i == 'f')
					break ;
				else
					return NO_TYPE;
			}
		}
		if (i == str.end())
		{
			_doubleValue = std::stod(str);
			return DOUBLE;
		}
		i++;
		if (*i == '\0')
		{
			_floatValue = std::stof(str);
			return FLOUAT;
		}
	}
	return NO_TYPE;
}

Convert::Convert(std::string const &arg) : _arg(arg)
{
	_type = parser(_arg);
	if (_type == CHAR)
		convertChar();
	else if (_type == INT)
		convertInt();
	else if (_type == FLOUAT)
		convertFloat();
	else if (_type == DOUBLE)
		convertDouble();
}

Convert::Convert(Convert const &other) { *this = other; }

void	Convert::convertChar()
{
	_intValue = static_cast<int>(_charValue);
	_floatValue = static_cast<float>(_charValue);
	_doubleValue = static_cast<double>(_charValue);
}

void	Convert::convertInt()
{
	_charValue = static_cast<char>(_intValue);
	_floatValue = static_cast<float>(_intValue);
	_doubleValue = static_cast<double>(_intValue);
}

void	Convert::convertFloat()
{
	_charValue = static_cast<char>(_floatValue);
	_intValue = static_cast<int>(_floatValue);
	_doubleValue = static_cast<double>(_floatValue);
}

void	Convert::convertDouble()
{
	_charValue = static_cast<char>(_doubleValue);
	_intValue = static_cast<int>(_doubleValue);
	_floatValue = static_cast<float>(_doubleValue);
}

std::string	Convert::getArg() const { return _arg; }

char	Convert::getChar() const { return _charValue; }

int		Convert::getInt() const { return _intValue; }

float	Convert::getFloat() const { return _floatValue; }

double	Convert::getDouble() const { return _doubleValue; }

int		Convert::getType() const { return _type; }

Convert&	Convert::operator = (Convert const &other)
{
	_arg = other._arg;
	return *this;
}

std::ostream&	operator << (std::ostream &out, Convert const &val)
{
	std::string 		tmp;
	std::stringstream	str;

	if (val.getType() == NO_TYPE)
	{
		out << "char: impossible\n";
		out << "int: impossible\n";
		if (val.getArg() == "nan")
		{
			out << "float: nanf\n";
			out << "double: nan\n";
		}
		else if (val.getArg() == "inf" || val.getArg() == "inff" || val.getArg() == "+inf" || val.getArg() == "+inff")
		{
			out << "float: inff\n";
			out << "double: inf\n";
		}
		else if (val.getArg() == "-inf" || val.getArg() == "-inff" || val.getArg() == "-inf" || val.getArg() == "-inff")
		{
			out << "float: -inff\n";
			out << "double: -inf\n";
		}
		else
		{
			out << "float: impossible\n";
			out << "double: impossible\n";
		}
	}
	else
	{
		out << "char: ";
		if (val.getInt() < 0 || val.getInt() > 127)
			out << "impossible\n";
		else if (val.getChar() < 32 || val.getChar() == 127)
			out << "Non displayable\n";
		else
			out << "'" << val.getChar() << "'\n";
		out << "int : " << val.getInt() << std::endl;
		str << "float: " << val.getFloat();
		tmp = str.str();
		if (tmp.find('.') == std::string::npos)
			str << ".0";
		str << "f";
		out << str.str() << std::endl;
		str.str(std::string());
		str.clear();
		str << "double: " << val.getDouble();
		tmp = str.str();
		if (tmp.find('.') == std::string::npos)
			str << ".0";
		out << str.str() << std::endl;
	}
	return out;
}
