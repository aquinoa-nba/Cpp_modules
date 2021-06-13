#include "Sorcerer.hpp"

int main()
{
	std::cout << std::endl << PURPLE "\t\t\t<< CONSTRUCTORS >>" NO_COLOR << std::endl << std::endl;

	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim	*bart = new Citizen("Bart");

	std::cout << std::endl << PURPLE "\t\t\t<< INTRODUCE >>" NO_COLOR << std::endl << std::endl;

	std::cout << robert << jim << joe << *bart;

	std::cout << std::endl << PURPLE "\t\t\t<< POLYMORPHS >>" NO_COLOR << std::endl << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*bart);

	std::cout << std::endl << PURPLE "\t\t\t<< DESTRUCTORS >>" NO_COLOR << std::endl << std::endl;

	delete bart;
	return 0;
}
