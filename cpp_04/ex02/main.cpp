#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	Squad			*vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	ISpaceMarine	*joj = new TacticalMarine;
	ISpaceMarine	*bim = new AssaultTerminator;
	Squad			*vlcNew = new Squad;

	vlcNew->push(joj);
	vlcNew->push(bim);

	*vlc = *vlcNew;

	for (int i = 0; i < vlcNew->getCount(); ++i)
	{
		ISpaceMarine* cur = vlcNew->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlcNew;
	delete vlc;
	return 0;
}
