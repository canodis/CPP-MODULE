#include "ClapTrap.h"

int	main()
{
	ClapTrap	a;

	a.attack("Zoro");
	a.takeDamage(5);
	a.beRepaired(10);
	a.takeDamage(14);
	std::cout << a;
}