#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

# define	GREEN		"\033[0;32m"
# define	B_GREEN		"\033[1;32m"
# define	B_RED		"\033[1;31m"
# define	B_PURPLE	"\033[1;35m"
# define	B_WHITE		"\033[1;37m"
# define	NO_COLOR	"\033[0m"

class Replace
{
	private:
		std::string			_fileName;
		std::string			_s1;
		std::string			_s2;
		std::ifstream		_fileIn;
		std::ofstream		_fileOut;
		bool				_openFlag;
	public:
		Replace(std::string fileName, std::string s1, std::string s2);
		bool checker();
		void	replacer();
		~Replace();
};

#endif
