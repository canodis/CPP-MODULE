#include "Zombie.h"

void	Zombie::announce(void) {
	std::cout << Name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << Name << " is Dead !" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->Name = name;
}
