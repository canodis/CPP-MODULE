#include "Zombie.h"

Zombie::Zombie(std::string name) {
	this->Name = name;
}

Zombie::~Zombie() {
	std::cout << Name << " is Dead! " << std::endl;
}

void Zombie::announce(void)
{
	std::cout << Zombie::Name+": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}