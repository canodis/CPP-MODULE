#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name, int _hp, int _energy, int _damage);
	~ScavTrap();
	ScavTrap(ScavTrap const &cpy);
	ScavTrap &operator=(const ScavTrap &src);
	void guardGate();
};
#endif