#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string _name, int _hp, int _energy, int _damage): ClapTrap(_name, _hp, _energy, _damage) {
	std::cout << "ScavTrap\'s constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap\'s Destructer called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy): ClapTrap(cpy) {
	std::cout << "ScavTrap\'s Copy constructor called" << std::endl;
}

void 	ScavTrap::guardGate() {
	std::cout << BLUE << "ScavTrap " + this->Name + " is now in Gate keeper mode." << NORM << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap\'s Operator= called" << std::endl;
	this->Name = src.Name;
	this->AttackDamage = src.AttackDamage;
	this->EnergyPoints = src.EnergyPoints;
	this->HitPoints = src.HitPoints;
	return (*this);
}
