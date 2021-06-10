#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	FragTrap firstRobo("Bender Rodriguez");
	FragTrap secondRobo("WALL-E");
	ScavTrap thirddRobo("KVN");

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
	std::cout << std::endl;
	while (thirddRobo.challengeNewcomer())
	{
		std::cout << std::endl;
	}
}
