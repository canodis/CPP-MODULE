#include "FragTrap.h"
#include "ScavTrap.h"

int	main()
{
	FragTrap	ft("can");
	ScavTrap	st("erdog");

	ft.attack("Zombie");
	ft.highFivesGuys();
	ft.takeDamage(25);
	ft.beRepaired(22);
	ft.highFivesGuys();
	st.attack("can");
	st.guardGate();
	std::cout << ft << std::endl;
	std::cout << st;

}