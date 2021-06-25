#include "whatever.hpp"

int		main(void)
{
	{
		int		intValue1(1);
		int		intValue2(2);
		std::string	str1("String 1");
		std::string	str2("String 2");

		for (int i = 0; i < 2; i++)
		{
			std::cout << '\n';
			std::cout << intValue1 << ' ' << intValue2 << "\n" << str1 << ' ' << str2 << "\n";
			std::cout << "min int: " << min(intValue1, intValue2) << '\n';
			std::cout << "max int: " << max(intValue1, intValue2) << '\n';
			std::cout << "min str: " << min(str1, str2) << '\n';
			std::cout << "max str: " << max(str1, str2) << '\n';
			swap(intValue1, intValue2);
			swap(str1, str2);
		}
	}
	std:: cout << "__________________________\n\n";
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
}
