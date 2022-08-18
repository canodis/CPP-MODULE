#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &wep) : weapon(wep) {
	this->name = name;
}

void	HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}