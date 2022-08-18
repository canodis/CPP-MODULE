#include "Weapon.h"

Weapon::Weapon(std::string type) {
	this->type = type;
}

std::string	Weapon::getType(void) const {
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	this->type = newType;
}

