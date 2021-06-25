#include "easyfind.hpp"

int		main(void)
{
	std::vector<int>					vctr;
	std::deque<int>						dq;
	std::set<int>						st;
	int									size(7);
	std::vector<int>::const_iterator	vctrRes;
	std::deque<int>::const_iterator		dequeRes;
	std::set<int>::const_iterator		setRes;

	for (int i = 0; i < size; i++)
	{
		vctr.push_back(i);
		dq.push_front(i);
		st.insert(i);
	}
	try
	{
		std::cout << "\nVECTOR\t\tDEQUE\t\tSET\n\n";
		for (int i = 0; i < size + 1; i++)
		{
			vctrRes = easyfind(vctr, i);
			std::cout<< *vctrRes << "\t\t";
			dequeRes = easyfind(dq, i);
			std::cout<< *dequeRes << "\t\t";
			setRes = easyfind(st, i);
			std::cout<< *setRes << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << "\n\n";
	}
}
