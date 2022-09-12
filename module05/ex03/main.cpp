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
		Intern someRandomIntern3;

		Form* rrf;
		Form* rrf2;
		Form* rrf3;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf2 = someRandomIntern2.makeForm("presidential    pardon", "canodis");
		rrf3 = someRandomIntern3.makeForm("shRub beryc Reation", "hello");
		std::cout << *rrf << std::endl;
		rrf->action();
		rrf2->action();
		rrf3->action();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}