#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <sstream>

enum	Type
{
	NO_TYPE,
	CHAR,
	INT,
	FLOUAT,
	DOUBLE
};

class Convert
{
	private:
		std::string		_arg;
		int				_type;
		char			_charValue;
		int				_intValue;
		float			_floatValue;
		double			_doubleValue;
		Convert();
		int			parser(std::string const &);
		void		convertChar();
		void		convertInt();
		void		convertFloat();
		void		convertDouble();
	public:
		Convert(std::string const &);
		Convert(Convert const &);
		~Convert() {}
		std::string	getArg() const;
		char		getChar() const;
		int			getInt() const;
		float		getFloat() const;
		double		getDouble() const;
		int			getType() const;
		Convert&	operator = (Convert const &);
};

std::ostream&	operator << (std::ostream &out, Convert const &val);

#endif
