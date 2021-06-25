#include "Array.hpp"

int		main(void)
{
	try
	{
		Array<int> arr(-5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> arr(5);
	try
	{
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i;
			std::cout << arr[i] << '\n';
		}
		std::cout << arr[arr.size()] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> arr2(5);
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		arr2[i] = arr.size() - 1 - i;
		std::cout << arr2[i] << '\n';
	}
	std::cout << '\n';
	arr2 = arr;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << ' ';
		std::cout << arr2[i] << '\n';
	}
	std::cout << '\n';
	Array<std::string>	arr3(3);
	for (unsigned int i = 0; i < arr3.size(); i++)
	{
		arr3[i] = "String " + std::to_string(i);
		std::cout << arr3[i] << '\n';
	}
	std::cout << '\n';
	Array<std::string> arr4 = arr3;
	for (unsigned int i = 0; i < arr4.size(); i++)
	{
		arr4[i] = "New String " + std::to_string(i);
		std::cout << arr4[i] << "   " << arr3[i] << '\n';
	}
}
