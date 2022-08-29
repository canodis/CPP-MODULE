#include "ClapTrap.h"

// ---- Constructors ---- // 
ClapTrap::ClapTrap(): Name("Kurisu Makise"),  HitPoints(10), EnergyPoints(10), AttackDamage(0) {
	std::cout << RED << "😆​ ClapTrap\'s Default Constructor called 😆" << NORM << std::endl;
}

ClapTrap::ClapTrap(std::string _name, int _hp, int _energy, int _damage) {
	std::cout << RED << "😆​ ClapTrap\'s Multiple Constructor called 😆" << NORM << std::endl;
	this->Name = _name;
	this->HitPoints = _hp;
	this->EnergyPoints = _energy;
	this->AttackDamage = _damage;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "💀 ClapTrap\'s Destructor called 💀" << NORM << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	std::cout << RED << "ClapTrap\'s Copy Constructor called" << NORM << std::endl;
	this->Name = cpy.Name;
	this->AttackDamage = cpy.AttackDamage;
	this->EnergyPoints = cpy.EnergyPoints;
	this->HitPoints = cpy.EnergyPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << RED << "ClapTrap\'s Operator= called" << NORM << std::endl;
	if (this == &src)
		return (*this);
	this->Name = src.Name;
	this->AttackDamage = src.AttackDamage;
	this->EnergyPoints = src.EnergyPoints;
	this->HitPoints = src.HitPoints;
	return (*this);
}

std::string	ClapTrap::GetInfo() const {
	return ("Name : " + this->Name + "\n" + "Hp : " + std::to_string(this->HitPoints) +
	"\n" + "Energy : " + std::to_string(this->EnergyPoints) + "\n" + "Attack : " + std::to_string(this->AttackDamage) + "\n");
}

void	ClapTrap::attack(const std::string &target) {
	if (this->EnergyPoints <= 0)
		std::cout << "Not enough energy !" << std::endl;
	else
	{
	std::cout << this->Name + " attacks "+ target + ", causing " 
	+ std::to_string(this->AttackDamage) + " points of damage!" << std::endl;
	this->EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int d) {
	this->HitPoints -= d;
	std::cout << this->Name + " takes " + std::to_string(d) + " damage and hp is : " + std::to_string(this->HitPoints) << std::endl;
	if (this->HitPoints <= 0)
	{
		std::cout << this->Name << " is Dead !" << std::endl;
		std::cout << *this;
		exit(0);
	}
}

void	ClapTrap::beRepaired(unsigned int hp) {
	if (this->EnergyPoints <= 0)
		std::cout << "Not enough energy !" << std::endl;
	else
	{
		this->HitPoints += hp;
		this->EnergyPoints--;
		std::cout << this->Name + "\'s hit points increased new hp : " + std::to_string(this->HitPoints) << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, ClapTrap &ct) {
	os << ct.GetInfo();
	return os;
}