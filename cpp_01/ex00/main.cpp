#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	first_pony;

	first_pony.SetName("Adam");
	first_pony.SetColor("Black");
	first_pony.SetFavoriteMeal("Carrot");
	first_pony.eat();
}

void	ponyOnTheHeap()
{
	Pony*	second_pony;

	second_pony = new Pony();
	second_pony->SetName("Eva");
	second_pony->SetColor("White");
	second_pony->SetFavoriteMeal("Sugar");
	second_pony->eat();
	delete second_pony;
}

int		main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
}
