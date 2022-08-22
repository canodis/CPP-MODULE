#include "ClapTrap.h"

int	main()
{
	ClapTrap	a("Canodis");

	a.attack("Zoro");
	a.takeDamage(5);
	a.beRepaired(10);
	a.takeDamage(15);
	std::cout << a;
}