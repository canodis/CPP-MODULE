#include "Weapon.h"
#include "HumanB.h"
#include "HumanA.h"

int main()
{
	Weapon	club = Weapon("club");

	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("bicak");
	bob.attack();
}