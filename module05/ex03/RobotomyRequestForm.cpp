#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45){
	this->Target = "None";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45){
	this->Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45) {
	this->Target = src.Target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	this->Target = obj.Target;
	return *this;
}

void	RobotomyRequestForm::action() const {
	srand(time(NULL));
	if (rand() % 2 == 0) {
		std::cout << "Bzzzztttt...." << std::endl;
		std::cout << this->Target << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << this->Target << " robotomy failed." << std::endl;
	}
}