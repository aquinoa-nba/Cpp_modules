#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top value\t--> " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size\t\t--> " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	++cit;
	--cit;
	for ( ; cit !=  cite; cit++)
		std::cout << *cit << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	for ( ; it !=  ite; it++)
		*it = 42;
	std::stack<int> s(mstack);
	size_t	size = s.size();
	for (size_t i = 0; i < size ; i++)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	MutantStack<std::string> mstackStr;
	for (size_t i = 0; i < size; i++)
		mstackStr.push("String " + std::to_string(i));
	MutantStack<std::string>::iterator itStr = mstackStr.begin();
	itStr += 3;
	std::cout << *itStr << '\n';
	return 0;
}
