#include "FragTrap.h"

FragTrap::FragTrap(): ClapTrap("Mayuri Shiina", 100, 100, 30) {
	std::cout << YEL  <<"😆 FragTrap\'s Default Constructor called 😆" << NORM << std::endl;
}

FragTrap::FragTrap(std::string _name, int _hpoints, int _epoints, int _damage) : ClapTrap(_name, _hpoints, _epoints, _damage) {
	std::cout << YEL  <<"😆 FragTrap\'s Multiple Constructor called 😆" << NORM << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << YEL << "💀 FragTrap\'s Destructor called 💀" << NORM << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {
	std::cout << YEL << "FragTrap\'s Copy Constructor called" << NORM << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << YEL << "FragTrap\'s = operator called" << NORM << std::endl;
	if (this == &src)
		return (*this);
	this->Name = src.Name;
	this->AttackDamage = src.AttackDamage;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << YEL << this->Name + " wants to high five !!" << NORM << std::endl;
}