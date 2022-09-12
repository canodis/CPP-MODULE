#include "Dog.h"

Dog::Dog(): Animal("dog") {
	std::cout << "Dog class's constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy) {
	std::cout << "Dog class's copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog class's operator= called" << std::endl;
	this->Animal::operator=(src);
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog class's destructor called" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "🐶 HAW ! HAW ! 🐶" << std::endl;
}