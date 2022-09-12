#ifndef CAT_H
# define CAT_H

# include "Brain.h"
# include "Animal.h"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &Cat);
	Cat &operator=(const Cat &src);
	void makeSound(void) const;
	~Cat();
};

#endif