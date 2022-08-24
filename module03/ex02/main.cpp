#include "FragTrap.h"
#include "ScavTrap.h"

int	main()
{
	FragTrap	ft;
	ScavTrap	st;
	ClapTrap	ct;

	ft.attack("Zombie");
	ft.highFivesGuys();
	ft.takeDamage(25);
	ct.attack("omg");
	ft.beRepaired(22);
	ft.highFivesGuys();
	st.attack("can");
	st.guardGate();
	std::cout << ft << std::endl;
	std::cout << st;

}