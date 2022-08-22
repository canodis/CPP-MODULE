#include "ScavTrap.h"

int	main()
{
	ScavTrap	a("can");
	std::cout << a.GetInfo();
	a.takeDamage(200);
	std::cout << "selam";
}