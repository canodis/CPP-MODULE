#include "../inc/Dog.h"
#include "../inc/Cat.h"
#define N 10

int main(void)
{
	Animal *animals[N];

	for (int i = 0; i < N; i++)
	{
		if (i & 1)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < N; i++)
		delete animals[i];
	system("leaks branimals");
	// copy test:
	// Dog dog;
	// Dog tmp = dog;
	// Cat cat;
	// Cat tmp2 = cat;
	// subject 
	/* const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0; */

}