#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
private:
	std::string Name;
	int	HitPoints;
	int	EnergyPoints;
	int	AttackDamage;
public:
	ClapTrap(std::string _name);
	ClapTrap(std::string _name, int _hp, int _energy, int _damage);
	ClapTrap(const ClapTrap &cpy);
	ClapTrap &operator= (const ClapTrap src);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	GetInfo() const;
};

std::ostream	&operator<<(std::ostream &os, ClapTrap &ct);

#endif