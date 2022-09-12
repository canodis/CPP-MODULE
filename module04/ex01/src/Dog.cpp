#include "../inc/Dog.h"

Dog::Dog(): Animal("dog") {
	this->brain = new Brain();
	std::cout << "Dog class's constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	std::cout << "Dog class's copy constructor called" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog class's operator= called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog class's destructor called" << std::endl;
	delete brain;
}

void	Dog::makeSound(void) const{
	std::cout << "🐶 HAW ! HAW ! 🐶" << std::endl;
}