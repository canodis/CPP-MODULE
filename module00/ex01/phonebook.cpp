#include "phonebook.h"
#include <string>

void	Phonebook::print_index(int idx)
{
	std::cout << "First name : " + Phonebook::persons[idx].fName << std::endl;
	std::cout << "Last name : " + Phonebook::persons[idx].lName << std::endl;
	std::cout << "Nickname : " + Phonebook::persons[idx].nName << std::endl;
	std::cout << "Phone number : " + Phonebook::persons[idx].pNumber << std::endl;
	std::cout << "Darkest secter : " + Phonebook::persons[idx].secret << std::endl;
}

std::string	column_check(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + '.');
}

void	Phonebook::add()
{
	int	i = idx % 8;
	persons[i].index = i;
	std::cin.ignore();
	std::cout << "First Name : ";
	std::getline(std::cin, persons[i].fName);
	std::cout << "Last Name : ";
	std::getline(std::cin, persons[i].lName);
	std::cout << "Nick Name : ";
	std::getline(std::cin, persons[i].nName);
	std::cout << "Phone Number : ";
	std::getline(std::cin, persons[i].pNumber);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, persons[i].secret);
	idx++;
	if (last < 8)
		last++;
}

void	Phonebook::search()
{
	int index;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < Phonebook::last; i++)
	{
		std::cout << std::right << std::setw(10) << persons[i].index;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << column_check(persons[i].fName);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << column_check(persons[i].lName);
		std::cout << "|";
		std::cout << std::right << std::setw(10) << column_check(persons[i].nName);
		std::cout << std::endl;
	}
	std::cout << "index : ";
	std::cin >> index;
	if (index < 0 || index >= Phonebook::last)
		std::cout << "Bad index !" << std::endl;
	else
		Phonebook::print_index(index);
}