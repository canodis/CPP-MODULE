#include "Dog.h"

Dog::Dog(): Animal("dog") {
	this->brain = new Brain();
	std::cout << "Dog class's constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	std::cout << "Dog class's copy constructor called" << std::endl;
	this->brain = cpy.brain;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog class's operator= called" << std::endl;
	this->Animal::operator=(src);
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog class's destructor called" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "🐶 HAW ! HAW ! 🐶" << std::endl;
}