#include "iostream"
#include "cassert"
#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat can("canodis", 15);
		Bureaucrat erdo("erdoggy", 56);

		Form f1("form1", 16, 55);
		Form f2("form2", 54, 54);
		can.signForm(f1);
		erdo.signForm(f2);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}