#include "iostream"
#include "cassert"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int main()
{
	try
	{
		Intern someRandomIntern;
		Intern someRandomIntern2;

		Form* rrf;
		Form* rrf2;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf2 = someRandomIntern2.makeForm("presidential    pardon", "canodis");
		std::cout << *rrf << std::endl;
		rrf->action();
		rrf2->action();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}