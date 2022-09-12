#ifndef FORM_H
# define FORM_H

class Bureaucrat;
# include <iostream>
class Form;
# include "Bureaucrat.h"

class Form
{
private:
	std::string Name;
	bool isSigned;
	const int sign;
	const int execute;
public:
	Form();
	Form(std::string Name, int Sing, int Execute);
	Form(const Form &cpy);
	Form &operator=(const Form &src);
	void	beSigned(Bureaucrat &bureaucrat);
	bool	getIsSigned() const;
	std::string getName() const;
	int	getSign() const;
	int	getExecute() const;
	~Form();
	
	class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, Form &_form);

#endif