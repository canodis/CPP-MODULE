#include "../inc/Cat.h"

Cat::Cat(): Animal("cat") {
	this->brain = new Brain();
	std::cout << "Cat class's constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	std::cout << "Cat class's copy constructor called" << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat class's operator= called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return(*this);
}

Cat::~Cat() {
	std::cout << "Cat class's destructor called" << std::endl;
	delete brain;
}

void	Cat::makeSound(void) const {
	std::cout << "😸 MEOWW 😸" << std::endl;
}