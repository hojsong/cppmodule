#include "Form.hpp"

Form::Form(){
	this->name = "Default";
	this->isSigned = false;
	this->signGrade = 1;
	this->executeGrade = 150;
}

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->isSigned = false;
}

Form::Form(const Form &obj) : name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), executeGrade(obj.executeGrade){

}

Form&	Form::operator=(const Form &form){
	if (this != &form){
		this->name = form.getName();
		this->isSigned = form.getSign();
		this->signGrade = form.getSignGrade();
		this->executeGrade = form.getExecuteGrade();
	}
	return (*this);
}

Form::~Form(){

}

std::string Form::getName() const{
	return this->name;
}

bool		Form::getSign() const{
	return this->isSigned;
}

int			Form::getSignGrade() const{
	return this->signGrade;
}

int			Form::getExecuteGrade() const{
	return this->executeGrade;
}

void		Form::setSign(bool re){
	this->isSigned = re;
}

void		Form::setName(std::string name){
	this->name = name;
}

void		Form::setSignGrade(int SignGrade){
	this->signGrade = SignGrade;
}

void		Form::setExecuteGrade(int ExecuteGrade){
	this->executeGrade = ExecuteGrade;
}

void		Form::beSign(Bureaucrat &obj){
	if (this->getSign()){
		std::cout << obj.getName() << " can't sign " << this->getName() << " bacause";
		throw Form::FormSignedAlreadyException();
	}
	else if (this->signGrade >= obj.getGrade()){
		std::cout << obj.getName() << " Signed " << this->getName() << std::endl;
		this->isSigned = true;
	}
	else {
		std::cout << obj.getName() << " can't sign " << this->getName() << " bacause";
		throw Form::GradeTooLowException();
	}

}

Form::GradeTooLowException::GradeTooLowException(){
	std::cout << "the Grade is too Low" << std::endl;
}

Form::FormSignedAlreadyException::FormSignedAlreadyException(){
	std::cout << "the form is Signed Already." << std::endl;
}


std::ostream		&operator<<(std::ostream &out, Form &form){
	out << form.getName() << " Form is ";
	if (form.getSign() == true)
		out << "Signed.";
	else
		out << "unSigned.";
	out << "Sign able to " << form.getSignGrade() << "Grade and Execute able to " << form.getExecuteGrade() << "Grade.";
	return (out);
}
