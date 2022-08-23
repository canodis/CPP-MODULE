#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string _name, int _hp, int _energy, int _damage): ClapTrap(_name, _hp, _energy, _damage) {
	std::cout << "Derived constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Derived Destructer called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy): ClapTrap(cpy) {
	std::cout << "Derived Copy constructor called" << std::endl;
}

void 	ScavTrap::guardGate() {
	std::cout << BLUE << "ScavTrap " + this->Name + " is now in Gate keeper mode." << NORM << std::endl;
}

// ScavTrap	&ScavTrap::operator=(const ScavTrap &src) {
// 	std::cout << "Derived Operator= called" << std::endl;

// }
