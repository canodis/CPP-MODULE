#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string _name, int _hp = 100, int _energy = 50, int _damage = 20);
	~ScavTrap();
	ScavTrap(ScavTrap const &cpy);
	//void guardGate();
};
#endif