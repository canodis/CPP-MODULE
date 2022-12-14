#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type);
	std::string	getType(void) const;
	void		setType(std::string newType);
};

#endif