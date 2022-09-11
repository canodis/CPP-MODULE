#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): Name("Can") {
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): Name(_name) {
	if (_grade <= 0)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	Grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): Name(cpy.Name), Grade(cpy.Grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	this->Grade = src.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

std::string Bureaucrat::getName() const {
	return (Name);
}

int	Bureaucrat::getGrade() const {
	return (Grade);
}

void	Bureaucrat::setGrade(int _grade) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	Grade = _grade;
}

void	Bureaucrat::incGrade(int n) {
	if (Grade - n < 1)
		throw Bureaucrat::GradeTooLowException();
	Grade -= n;
}

void	Bureaucrat::decGrade(int n) {
	if (Grade + n > 150)
		throw Bureaucrat::GradeTooHighException();
	Grade += n;
}

void Bureaucrat::signForm(Form &_form) {
	try
	{
		_form.beSigned(*this);
		std::cout << this->Name + " signed " + _form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->Name + " couldn't sign " + _form.getName() + " beacuse " + e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form &Form){
	try
	{
		Form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute "
				  << Form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &src) {
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return os;
}