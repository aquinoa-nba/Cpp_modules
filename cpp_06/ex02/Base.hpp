#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	public:
		Base() {}
		virtual ~Base() {}
};

class A : public Base
{
	public:
		A() : Base() {}
		~A() {}
};

class B : public Base
{
	public:
		B() : Base() {}
		~B() {}
};

class C : public Base
{
	public:
		C() : Base() {}
		~C() {}
};

#endif
