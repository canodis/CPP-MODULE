#include "ScavTrap.h"

int	main()
{
	ScavTrap	a("can");
	ScavTrap	b(a);
	std::cout << a;
	a.takeDamage(90);
	a.beRepaired(40);
	a.attack("erdoggy");
	a.guardGate();
	a.takeDamage(30);
}