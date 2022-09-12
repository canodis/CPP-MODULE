#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
 
class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string _type);
	Animal(const Animal &cpy);
	Animal &operator=(const Animal &src);
	std::string getType() const;
	virtual void makeSound(void) const;
	virtual ~Animal();
};

#endif