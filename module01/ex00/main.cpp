#include "Zombie.h"

int main()
{
	Zombie	*z = newZombie("can");
	z->announce();
	randomChump("Erdog");
	delete z;
}