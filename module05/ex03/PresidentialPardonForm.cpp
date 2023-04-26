#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
	this->target = "default";
	this->setName("PresidentialPardonForm");
	this->setSign(false);
	this->setSignGrade(25);
	this->setExecuteGrade(5);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target){
	this->target = target;
	this->setName("PresidentialPardonForm");
	this->setSign(false);
	this->setSignGrade(25);
	this->setExecuteGrade(5);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src){
	this->target = src.target;
	this->setName(src.getName());
	this->setSign(src.getSign());
	this->setSignGrade(src.getSignGrade());
	this->setExecuteGrade(src.getExecuteGrade());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src){
	if (this != &src){
		this->target = src.target;
		this->setName(src.getName());
		this->setSign(src.getSign());
		this->setSignGrade(src.getSignGrade());
		this->setExecuteGrade(src.getExecuteGrade());
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

void PresidentialPardonForm::setTarget(std::string target){
	this->target = target;
}

std::string PresidentialPardonForm::getTarget() const{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->getSign()) {
		std::cout << this->getName() << " form is not signed." << std::endl;
	} else {
		if (executor.getGrade() > this->getExecuteGrade()) {
			throw Bureaucrat::GradeTooLowException();
		} else {
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
	}
}
