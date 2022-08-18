#include "harl.h"

void	harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-";
	std::cout << "specialketchup burger. I really do!" << std::endl;
}

void	harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon";
	std::cout << "costs more money. You didn’t put enough";
	std::cout << " bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void	harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon";
	std::cout << "for free. I’ve been coming for years whereas";
	std::cout << " you started working here since last month." << std::endl;
}

void	harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to";
	std::cout << " the manager now." << std::endl;
}

void	harl::complain(std::string level)
{
	void	(harl::*p_complain[4])(void) = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*p_complain[i])();
			break;
		}
	}
}