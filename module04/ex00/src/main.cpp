#include "Animal.h"
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	WrongAnimal* a = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	a->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete a;
	system("leaks animals");
}