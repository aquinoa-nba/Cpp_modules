#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	std::cout << std::endl << PURPLE "\t\t\t<< CONSTRUCTORS >>" NO_COLOR << std::endl;

	FragTrap	firstRobo("Bender Rodriguez");
	FragTrap	secondRobo("WALL-E");
	ScavTrap	thirdRobo("KVN");
	NinjaTrap	fourthRobo("Chappie");
	ClapTrap	fifthRobo("Clockwerk");
	SuperTrap	sixthRobo("Bumblebee");

	std::cout << std::endl << PURPLE "\t\t\t<< ex00 >>" NO_COLOR << std::endl << std::endl;

	while (1)
	{
		if (firstRobo.vaulthunterDotExe(secondRobo.getName()))
		{
			firstRobo.meleeAttack(secondRobo.getName());
			secondRobo.takeDamage(firstRobo.getMeleeAttackDamage());
		}
		else
			break ;
		if (firstRobo.vaulthunterDotExe(secondRobo.getName()))
		{
			firstRobo.rangedAttack(secondRobo.getName());
			secondRobo.takeDamage(firstRobo.getRangedAttackDamage());
		}
		else
			break ;
	}
	secondRobo.takeDamage(-30);
	secondRobo.takeDamage(40);
	secondRobo.beRepaired(200);
	secondRobo.takeDamage(104);
	secondRobo.takeDamage(5);

	std::cout << std::endl << PURPLE "\t\t\t<< ex01 >>" NO_COLOR << std::endl << std::endl;

	while (thirdRobo.challengeNewcomer())
	{
		std::cout << std::endl;
	}

	std::cout << std::endl << PURPLE "\t\t\t<< ex03 >>" NO_COLOR << std::endl << std::endl;

	fourthRobo.meleeAttack(secondRobo.getName());
	fourthRobo.rangedAttack(secondRobo.getName());
	fourthRobo.ninjaShoebox(firstRobo);
	fourthRobo.ninjaShoebox(thirdRobo);
	fourthRobo.ninjaShoebox(fourthRobo);
	fourthRobo.ninjaShoebox(fifthRobo);
	fourthRobo.ninjaShoebox(secondRobo);

	std::cout << std::endl << PURPLE "\t\t\t<< ex04 >>" NO_COLOR << std::endl << std::endl;

	sixthRobo.vaulthunterDotExe(firstRobo.getName());
	sixthRobo.ninjaShoebox(secondRobo);

	sixthRobo.rangedAttack(thirdRobo.getName());
	sixthRobo.meleeAttack(fourthRobo.getName());

	std::cout << std::endl;

	std::cout << std::endl << PURPLE "\t\t\t<< DESTRUCTORS >>" NO_COLOR << std::endl << std::endl;
}
