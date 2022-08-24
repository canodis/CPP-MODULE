#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name, int _hpoints, int _epoints, int damage);
	FragTrap(const FragTrap &cpy);
	FragTrap &operator=(const FragTrap &src);
	void highFivesGuys(void);
	~FragTrap();
};


#endif