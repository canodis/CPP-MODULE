#include "ScavTrap.h"

ScavTrap::~ScavTrap() {
	std::cout << "Destructer called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name, int _hp, int _energy, int _damage): ClapTrap(_name, _hp, _energy, _damage) {
	
	
}