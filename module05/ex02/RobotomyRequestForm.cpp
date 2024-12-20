#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
	this->target = "default";
	this->setName("RobotomyRequestForm");
	this->setSign(false);
	this->setSignGrade(72);
	this->setExecuteGrade(45);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target){
	this->target = target;
	this->setName("RobotomyRequestForm");
	this->setSign(false);
	this->setSignGrade(72);
	this->setExecuteGrade(45);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src){
	this->target = src.target;
	this->setName(src.getName());
	this->setSign(src.getSign());
	this->setSignGrade(src.getSignGrade());
	this->setExecuteGrade(src.getExecuteGrade());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
	if (this != &src){
		this->target = src.target;
		this->setName(src.getName());
		this->setSign(src.getSign());
		this->setSignGrade(src.getSignGrade());
		this->setExecuteGrade(src.getExecuteGrade());
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

void RobotomyRequestForm::setTarget(std::string target){
	this->target = target;
}

std::string RobotomyRequestForm::getTarget() const{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!this->getSign()) {
		std::cout << this->getName() << " form is not signed." << std::endl;
	} else {
		if (executor.getGrade() > this->getExecuteGrade()) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			std::srand(std::time(NULL));
			std::cout << "Bzzzzzzzzzzzzzzzz!" << std::endl;
			if (std::rand() % 2 == 0){
				std::cout << this->getTarget() << " has been robotomized successfully " << std::endl;
			}
			else {
				std::cout << this->getTarget() << " that the robotomy failed." << std::endl;
			}
		}
	}
}