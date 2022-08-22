#include "ClapTrap.h"

int	main()
{
	ClapTrap	a("Canodis", 10, 10, 5);

	a.attack("Zoro");
	a.takeDamage(5);
	a.beRepaired(10);
	a.takeDamage(15);
	std::cout << a;
}