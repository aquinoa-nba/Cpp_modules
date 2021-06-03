#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	pony;

	pony.setName("Adam");
	pony.setColor("Black");
	pony.setFavoriteMeal("Carrot");
	pony.eat();
}

void	ponyOnTheHeap()
{
	Pony*	pony;

	pony = new Pony();
	pony->setName("Eva");
	pony->setColor("White");
	pony->setFavoriteMeal("Sugar");
	pony->eat();
	delete pony;
}

int		main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
}
