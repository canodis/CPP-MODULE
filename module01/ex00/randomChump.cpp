#include "Zombie.h"

void randomChump(std::string name) {
	Zombie	nZombie(name);
	nZombie.announce();
}