#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
class Bureaucrat;
# include "Form.h"

class Bureaucrat
{
private:
	const std::string Name;
	int	Grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	std::string getName() const;
	int	getGrade() const;
	void setGrade(int _grade);
	void decGrade(int n);
	void incGrade(int n);
	void signForm(Form &_form);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("Grade too high !");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw() {
			return ("Grade too low !");
		}
	};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat &src);

#endif