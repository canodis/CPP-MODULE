#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.h"
# include "Animal.h"

class WrongCat : public WrongAnimal, public Animal
{
public:
	WrongCat();
	WrongCat(std::string _type);
	WrongCat(const WrongCat &cpy);
	WrongCat &operator=(const WrongCat &src);
	void makeSound(void) const;
	~WrongCat();
};

#endif