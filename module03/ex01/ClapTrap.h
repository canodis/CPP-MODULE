#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLUE   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define NORM "\x1B[0m"

# include <iostream>

class ClapTrap
{
protected:
	std::string Name;
	int	HitPoints;
	int	EnergyPoints;
	int	AttackDamage;
public:
	ClapTrap(std::string _name, int _hp, int _energy, int _damage);
	ClapTrap(const ClapTrap &cpy);
	ClapTrap &operator=(const ClapTrap &src);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	GetInfo() const;
};

std::ostream	&operator<<(std::ostream &os, ClapTrap &ct);

#endif