#include "Cat.h"

Cat::Cat(): Animal("cat") {
	std::cout << "Cat class's constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy) {
	std::cout << "Cat class's copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat class's operator= called" << std::endl;
	this->Animal::operator=(src);
	return(*this);
}

Cat::~Cat() {
	std::cout << "Cat class's destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "😸 MEOWW 😸" << std::endl;
}