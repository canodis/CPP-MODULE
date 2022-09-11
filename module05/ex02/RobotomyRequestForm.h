#ifndef ROBOTMYREQUESTFORM_H
# define ROBOTMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm: public Form
{
	private:
		std::string Target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &obj);
		void	action() const;
};

#endif