#ifndef INTERN_H
# define INTERN_H

# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

class Intern
{
private:
	Form *forms[3];
public:
	Intern();
	Intern(Intern const &copy);
	Intern &operator=(Intern const &src);
	~Intern();
	Form *makeForm(std::string _form, std::string _target);
	class FormNotFound : public std::exception
	{
	public:
		const char *what() const throw();
	};
};


#endif