#include "Base.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
	{
		std::cout << "Generate A\n";
		return new A;
	}
	case 1:
	{
		std::cout << "Generate B\n";
		return new B;
	}
	case 2:
	{
		std::cout << "Generate C\n";
		return new C;
	}
	default:
		break ;
	}
	return 0;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify from pointer: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Identify from pointer: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Identify from pointer: C\n";
}

void	identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Identify from reference: A\n";
	}
	catch(const std::bad_cast) {}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout <<"Identify from reference: B\n";
	}
	catch(const std::bad_cast) {}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Identify from reference: C\n";
	}
	catch(const std::bad_cast) {}
}

int		main(void)
{
	Base *value = generate();
	identify_from_pointer(value);
	identify_from_reference(*value);

	delete value;
	return 0;
}
