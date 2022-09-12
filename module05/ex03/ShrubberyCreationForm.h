#ifndef SHRUBERRYCREATIONFORM_H
# define SHRUBERRYCREATIONFORM_H

#include "Form.h"
#include <fstream>

class ShrubberyCreationForm: public Form 
{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string Target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm();
		Form *clone(std:: string _target);
		void	action() const;
};

#endif