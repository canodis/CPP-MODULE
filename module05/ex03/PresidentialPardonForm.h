#ifndef PRESODENTIALPARDONFORM_H
# define PRESODENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm: public Form
{
	private:
		std::string Target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string Target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
		~PresidentialPardonForm();
		Form *clone(std:: string _target);
		void	action() const;
};

#endif