#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "BlackTemplar.hpp"
#include "BurningBlade.hpp"

void	battle_black_tamplar(Character *doomGuy, Enemy *templar)
{
	while (templar->getHP())
	{
		std::cout << *doomGuy;
		if (doomGuy->getAPCost() < doomGuy->getWeapon()->getAPCost())
		{
			doomGuy->attack(templar);
			doomGuy->recoverAP();
			continue ;
		}
		doomGuy->attack(templar);
		std::cout << *templar;
	}
	doomGuy->attack(templar);
}

void	battle_with_scorp(Character *doomGuy, Enemy *scorp)
{
	while (scorp->getHP())
	{
		std::cout << *doomGuy;
		if (doomGuy->getAPCost() < doomGuy->getWeapon()->getAPCost())
		{
			doomGuy->attack(scorp);
			doomGuy->recoverAP();
			continue ;
		}
		doomGuy->attack(scorp);
		std::cout << *scorp;
	}
	doomGuy->attack(scorp);
}

void	battle_with_mutant(Character *doomGuy, Enemy *mutant)
{
	std::cout << *doomGuy;
	while (mutant->getHP())
	{
		if (doomGuy->getAPCost() < doomGuy->getWeapon()->getAPCost())
		{
			doomGuy->attack(mutant);
			doomGuy->recoverAP();
			continue ;
		}
		doomGuy->attack(mutant);
		std::cout << *mutant;
	}
	doomGuy->attack(mutant);
}

int main()
{
	std::cout << std::endl << PURPLE "\t\t\t<< CONSTRUCTORS >>" NO_COLOR << std::endl << std::endl;

	Character	*doomGuy = new Character("Doomguy");
	SuperMutant	*mutant = new SuperMutant;
	RadScorpion	*scorp = new RadScorpion;
	PlasmaRifle	*pr = new PlasmaRifle;
	PowerFist	*pf = new PowerFist;
	AWeapon		*bb = new BurningBlade;
	Enemy		*templar = new BlackTemplar;

	std::cout << std::endl << PURPLE "\t\t\t<< INTRODUCE >>" NO_COLOR << std::endl << std::endl;

	std::cout << *doomGuy;
	std::cout << *mutant;
	std::cout << *scorp;

	doomGuy->attack(scorp);
	doomGuy->attack(mutant);
	std::cout << *doomGuy;
	std::cout << *scorp;
	std::cout << *mutant;

	std::cout << std::endl << PURPLE "\t\t\t<< BATTLE WITH SCORPION >>" NO_COLOR << std::endl << std::endl;

	doomGuy->equip(pr);
	battle_with_scorp(doomGuy, scorp);

	std::cout << std::endl << PURPLE "\t\t\t<< BATTLE WITH MUTANT >>" NO_COLOR << std::endl << std::endl;

	doomGuy->equip(pf);
	battle_with_mutant(doomGuy, mutant);

	std::cout << std::endl << PURPLE "\t\t\t<< BATTLE WITH BLACK TEMPLAR >>" NO_COLOR << std::endl << std::endl;

	doomGuy->equip(bb);
	battle_with_mutant(doomGuy, templar);

	std::cout << std::endl << PURPLE "\t\t\t<< DESTRUCTORS >>" NO_COLOR << std::endl << std::endl;

	delete bb;
	delete pf;
	delete pr;
	delete doomGuy;

	return 0;
}
