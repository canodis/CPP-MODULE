#include <iostream>
#include "convert.h"

bool	isValid(std::string &input)
{
	if (is_pseudo_literal(input))
		return true;
	else if (input.length() == 1 && std::isalpha(input[0]))
	{
		input = std::to_string((int)input[0]);
		return true;
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f'
			&& c != '.')
			return false;
	}
	return true;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad Args !";
		return (1);
	}
	std::string value = (std::string)av[1];
	if (isValid(value))
		convertValue(value);
	else
		std::cout << "Bad Value !" << std::endl;
}