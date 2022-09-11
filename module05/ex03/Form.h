#ifndef FORM_H
# define FORM_H

# include <iostream>
class Form;
# include "Bureaucrat.h"

class Form
{
private:
	std::string Name;
	bool isSigned;
	const int Sign;
	const int Execute;
public:
	Form();
	Form(std::string Name, int Sing, int Execute);
	Form(const Form &cpy);
	Form &operator=(const Form &src);
	void	beSigned(Bureaucrat &bureaucrat);
	virtual void action() const = 0;
	 void	execute(Bureaucrat const &executor) const;
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