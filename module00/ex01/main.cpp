#include "phonebook.h"

int main()
{
	Phonebook	pbook;
	std::string	input;

	pbook.idx = 0;
	pbook.last = 0;
	while (666)
	{
		std::cout << "Enter a command(ADD/SEARCH/EXIT) : ";
		std::cin >> input;
		if (input == "ADD") pbook.add();
		else if (input == "SEARCH") pbook.search();
		else if (input == "EXIT") break;
		else
			std::cout << "Wrong entry !" << std::endl;
	}
}