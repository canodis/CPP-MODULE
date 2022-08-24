#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:

	FragTrap(std::string _name, int _hpoints = 100, int _epoints = 30, int damage = 30);
	FragTrap(const FragTrap &cpy);
	FragTrap &operator=(const FragTrap src);
	void highFivesGuys(void);
	~FragTrap();
};


#endif