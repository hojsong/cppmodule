#include "AForm.hpp"

AForm::AForm(){
	this->name = "Default";
	this->isSigned = false;
	this->signGrade = 1;
	this->executeGrade = 150;
}

AForm::AForm(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->isSigned = false;
}

AForm::AForm(const AForm &obj) : name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), executeGrade(obj.executeGrade){

}

AForm&	AForm::operator=(const AForm &AForm){
	if (this != &AForm){
		this->name = AForm.getName();
		this->isSigned = AForm.getSign();
		this->signGrade = AForm.getSignGrade();
		this->executeGrade = AForm.getExecuteGrade();
	}
	return (*this);
}

AForm::~AForm(){

}

std::string AForm::getName() const{
	return this->name;
}

bool		AForm::getSign() const{
	return this->isSigned;
}

int			AForm::getSignGrade() const{
	return this->signGrade;
}

int			AForm::getExecuteGrade() const{
	return this->executeGrade;
}

void		AForm::setSign(bool re){
	this->isSigned = re;
}

void		AForm::setName(std::string name){
	this->name = name;
}

void		AForm::setSignGrade(int SignGrade){
	this->signGrade = SignGrade;
}

void		AForm::setExecuteGrade(int ExecuteGrade){
	this->executeGrade = ExecuteGrade;
}

void		AForm::beSign(Bureaucrat &obj){
	if (this->getSign()){
		std::cout << obj.getName() << " can't sign " << this->getName() << " bacause";
		throw AForm::AFormSignedAlreadyException();
	}
	else if (this->signGrade >= obj.getGrade()){
		std::cout << obj.getName() << " Signed " << this->getName() << std::endl;
		this->isSigned = true;
	}
	else {
		std::cout << obj.getName() << " can't sign " << this->getName() << " bacause";
		throw AForm::GradeTooLowException();
	}

}

AForm::GradeTooLowException::GradeTooLowException(){
	std::cout << "the Grade is too Low" << std::endl;
}

AForm::AFormSignedAlreadyException::AFormSignedAlreadyException(){
	std::cout << "the AForm is Signed Already." << std::endl;
}


std::ostream		&operator<<(std::ostream &out, AForm &AForm){
	out << AForm.getName() << " AForm is ";
	if (AForm.getSign() == true)
		out << "Signed.";
	else
		out << "unSigned.";
	out << "Sign able to " << AForm.getSignGrade() << "Grade and Execute able to " << AForm.getExecuteGrade() << "Grade.";
	return (out);
}
