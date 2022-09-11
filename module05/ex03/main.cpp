#include "iostream"
#include "cassert"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main()
{
	{
		PresidentialPardonForm pp("PP"); // 25, 5
	
		Bureaucrat can("canodis", 3);
		Bureaucrat erdo("erdoggy", 6);
	
		can.signForm(pp);
		erdo.signForm(pp);
	
		can.executeForm(pp);
		erdo.executeForm(pp);
		std::cout << "--------------------------" << std::endl;
	}
	{
		RobotomyRequestForm rqf("RQF");
		Bureaucrat can("canodis", 3);
		Bureaucrat erdo("erdoggy", 6);

		can.signForm(rqf);
		erdo.signForm(rqf);
	
		can.executeForm(rqf);
		erdo.executeForm(rqf);
		std::cout << "--------------------------" << std::endl;
	}
	{
		ShrubberyCreationForm scf("SCF");
		Bureaucrat can("canodis", 3);
		Bureaucrat erdo("erdoggy", 6);

		can.signForm(scf);
		erdo.signForm(scf);
	
		can.executeForm(scf);
		erdo.executeForm(scf);
	}

}