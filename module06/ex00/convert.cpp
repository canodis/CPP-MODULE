#include "convert.h"

bool	is_pseudo_literal(std::string &s)
{
	return (s == "nan" || s == "nanf" || s == "+inf" || s == "inf"
		|| s == "-inf" || s == "+inff" || s == "inff" || s == "-inff");
}

void	convertChar(std::string value) {
	if (is_pseudo_literal(value))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	char c = (char)(atoi(value.c_str()));
	if (c < 32 || c > 126)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "\'" << c << "\'" << std::endl;
}

void	convertInt(std::string value) {
	if (is_pseudo_literal(value))
	{
		std::cout << "Impossible" << std::endl;
		return;
	}
	std::cout << std::atoi(value.c_str()) << std::endl;
}

void	convertFloat(std::string value) {
	float number = std::atof(value.c_str());
	if (number - (int)(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}

void	convertDouble(std::string value) {
	double number = std::strtod(value.c_str(), NULL);
	if (number - (int)(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

void	convertValue(std::string value)
{
	std::cout << "Char : "; convertChar(value);
	std::cout << "Int : "; convertInt(value);
	std::cout << "Float : "; convertFloat(value);
	std::cout << "Double : "; convertDouble(value);
}