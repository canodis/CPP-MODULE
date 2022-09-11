#include "Form.h"

Form::Form(): Name("None"), Sign(1), Execute(1) {
	isSigned = false;
}

Form::Form(std::string Name, int Sign, int Execute): Name(Name), Sign(Sign), Execute(Execute) {
	if (this->Sign < 1 || this->Execute < 1)
		throw Form::GradeTooHighException();
	if (this->Sign > 150 || this->Execute > 150)
		throw  Form::GradeTooLowException();
	isSigned = false;
}

Form::~Form() {
}

Form::Form(const Form &cpy): Name(cpy.Name), Sign(cpy.Sign), Execute(cpy.Execute) {
}

void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->Sign)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

Form &Form::operator=(const Form &src) {
	if (this->Sign < 1 || this->Execute < 1)
		throw Form::GradeTooHighException();
	if (this->Sign > 150 || this->Execute > 150)
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
	return (this->Sign);
}

int	Form::getExecute() const {
	return (this->Execute);
}

void	Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	if (!this->getIsSigned())
	{
		std::cout << "couldn't execute form because it's not signed" << std::endl;
		return;
	}
	this->action();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Form &_form)
{
	os << "Name : " + _form.getName() + " Is Singed : " + (_form.getIsSigned() ? "yes" : "no") +
	" Sign : " + std::to_string(_form.getSign()) + " Execute : " + std::to_string(_form.getExecute());
	return (os);
}