#include "Weapon.h"
#include "HumanB.h"
#include "HumanA.h"
#include <stdlib.h>

int main()
{
	Weapon	club = Weapon("qwer");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("canodis");
	jim.attack();
}