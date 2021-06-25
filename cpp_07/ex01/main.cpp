#include "iter.hpp"

template <typename T>
void	print(T const &val)
{
	std::cout << val << '\n';
}

int		main(void)
{
	size_t				arrSize = 10;
	int					intArr[arrSize];
	std::string			strArr[arrSize];
	std::stringstream	buf;

	for (size_t i = 0; i < arrSize; i++)
	{
		intArr[i] = i;
		buf << i;
		strArr[i] = "String " + buf.str();
		buf.str(std::string());
	}
	
	iter(intArr, arrSize, print);
	std::cout << '\n';
	iter(strArr, arrSize, print);
}
