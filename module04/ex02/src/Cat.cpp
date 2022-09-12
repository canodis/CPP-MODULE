#include "Cat.h"

Cat::Cat(): Animal("cat") {
	std::cout << "Cat class's constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	this->brain = cpy.brain;
	std::cout << "Cat class's copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat class's operator= called" << std::endl;
	this->Animal::operator=(src);
	this->brain = src.brain;
	return(*this);
}

Cat::~Cat() {
	std::cout << "Cat class's destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound(void) const {
	std::cout << "😸 MEOWW 😸" << std::endl;
}