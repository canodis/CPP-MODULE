#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string _name, int _hp = 100, int _energy = 50, int _damage = 30);
	~ScavTrap();
	ScavTrap(ScavTrap const &cpy);
	ScavTrap &operator=(const ScavTrap &src);
	void guardGate();
};
#endif