#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string	Name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif