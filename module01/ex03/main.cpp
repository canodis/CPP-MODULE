#include "Weapon.h"
#include "HumanB.h"
#include "HumanA.h"
#include <stdlib.h>

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("knife");
		bob.attack();
	}
	{
		std::cout << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("knife");
		jim.attack();
	}
	return 0;
}