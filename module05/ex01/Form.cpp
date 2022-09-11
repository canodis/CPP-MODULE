#include "Form.h"

Form::Form(): Name("None"), sign(1), execute(1) {
	isSigned = false;
}

Form::Form(std::string Name, int Sign, int Execute): Name(Name), sign(Sign), execute(Execute) {
	if (this->sign < 1 || this->execute < 1)
		throw Form::GradeTooHighException();
	if (this->sign > 150 || this->execute > 150)
		throw  Form::GradeTooLowException();
	isSigned = false;
}

Form::~Form() {
}

Form::Form(const Form &cpy): Name(cpy.Name), sign(cpy.sign), execute(cpy.execute) {
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->sign)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

Form &Form::operator=(const Form &src) {
	if (this->sign < 1 || this->execute < 1)
		throw Form::GradeTooHighException();
	if (this->sign > 150 || this->execute > 150)
		throw  Form::GradeTooLowException();
	this->isSigned = src.isSigned;
	return *this;
}

const char  *Form::GradeTooHighException::what() const throw(){
	return ("Grade Too High");
}

const char  *Form::GradeTooLowException::what() const throw(){
	return ("Grade Too Low");
}

bool Form::getIsSigned() const {
	return (isSigned);
}

std::string Form::getName() const {
	return (Name);
}

int	Form::getSign() const {
	return (sign);
}

int	Form::getExecute() const {
	return (execute);
}

std::ostream	&operator<<(std::ostream &os, Form &_form)
{
	os << "Name : " + _form.getName() + " Is Singed : " + (_form.getIsSigned() ? "yes" : "no") +
	" Sign : " + std::to_string(_form.getSign()) + " Execute : " + std::to_string(_form.getExecute());
	return (os);
}