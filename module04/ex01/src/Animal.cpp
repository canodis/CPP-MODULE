#include "../inc/Animal.h"

Animal::Animal() {
	this->type = "I am animal :)";
	std::cout << "Animal class's default constructor called" << std::endl;
}

Animal::Animal(std::string _type) {
	this->type = _type;
	std::cout << "Animal class's constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal class's destructor called" << std::endl;
}

Animal::Animal(const Animal &cpy) {
	std::cout << "Animal class's copy constructor called" << std::endl;
	this->type = cpy.type;
}

Animal	&Animal::operator=(const Animal &src) {
	std::cout << "Animal class's operator= called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "Some animal sounds" << std::endl;
}