#include "span.hpp"
#include <vector>
#include <unistd.h>

void	testWithVector(Span sp)
{
	int 				j;
	std::vector<int>	vec;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		std::cout << (j = rand() % 30) << '\n';
		vec.push_back(j);
		sleep(1);
	}
	sp.addNumber(vec.begin(), vec.end());
	std::cout << "Shortest\t--> " << sp.shortestSpan() << std::endl;
	std::cout << "Longest\t\t--> " << sp.longestSpan() << std::endl;
}

int main()
{
	Span sp = Span(5);
	testWithVector(sp);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Shortest\t--> " << sp.shortestSpan() << std::endl;
	std::cout << "Longest\t\t--> " << sp.longestSpan() << std::endl;
}
