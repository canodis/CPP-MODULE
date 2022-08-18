#include "Harl.h"

void	harlFilter(char *arg, Harl h)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == arg)
			for (; i < 4; i++)
			{
				h.complain(levels[i]);
				std::cout << std::endl;
			}
}

int	main(int ac, char **av)
{
	Harl	h;

	if(ac != 2 )
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	else
		harlFilter(av[1], h);
}