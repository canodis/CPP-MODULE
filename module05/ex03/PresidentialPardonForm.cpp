#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5) {
	this->Target = "None";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5) {
	this->Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5) {
	this->Target = src.Target;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj) {
	this->Target = obj.Target;
	return *this;
}

void PresidentialPardonForm::action() const {
	std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form *PresidentialPardonForm::clone(std::string _target) {
	return (new PresidentialPardonForm(_target));
}