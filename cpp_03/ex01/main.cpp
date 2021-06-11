#include "ScavTrap.hpp"

int		main()
{
	std::cout << std::endl << PURPLE "\t\t\t<< CONSTRUCTORS >>" NO_COLOR << std::endl << std::endl;

	FragTrap firstRobo("Bender Rodriguez");
	FragTrap secondRobo("WALL-E");
	ScavTrap thirdRobo("KVN");

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

	thirdRobo.rangedAttack(secondRobo.getName());
	thirdRobo.meleeAttack(secondRobo.getName());
	while (thirdRobo.challengeNewcomer())
	{
		std::cout << std::endl;
	}

	std::cout << std::endl << PURPLE "\t\t\t<< DESTRUCTORS >>" NO_COLOR << std::endl << std::endl;
}
