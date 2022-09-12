#include "Brain.h"


Brain::Brain() {
	std::cout << "Brain class's constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain class's destructor called" << std::endl;
}

Brain::Brain(const Brain &cpy) {
	*this = cpy;
	std::cout << "Brain class's copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &src) {
	std::cout << "Brain class's operator= called" << std::endl;
	if (this == &src)
		return (*this);
	return (*this);
}