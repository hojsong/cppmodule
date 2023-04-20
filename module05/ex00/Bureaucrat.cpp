#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){
	this->name = "Default";
	this->grade = 150;
}

// Bureaucrat::Bureaucrat(void *name){
// 	if (name == NULL)
// 		throw Bureaucrat::NullPointException();
// 	else
// 		this->name = (char *)name;
// }

// Bureaucrat::Bureaucrat(void *name, int grade){
// 	if (name == NULL)
// 		throw Bureaucrat::NullPointException();
// 	else
// 		this->name = (char *)name;
// 	this->grade = grade;
// }

Bureaucrat::Bureaucrat(int grade){
	this->name = "Default";
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(std::string name){
	if (name.empty())
		throw Bureaucrat::NullPointException();
	this->setName(name);
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	if (name.empty())
		throw Bureaucrat::NullPointException();
	this->setName(name);
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(Bureaucrat &copy){
	this->name = copy.getName();
	this->setGrade(copy.getGrade());
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &obj){
	if (this->name != obj.name)
		this->name = obj.name;
	if (this->grade != obj.grade)
		this->setGrade(obj.grade);
	return (*this);
}

void Bureaucrat::setName(std::string name){
	if (name.empty())
		throw Bureaucrat::NullPointException();
	else
		this->name = name;
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150){
		Bureaucrat::GradeTooLowException();
	}
	else
		this->grade = grade;
}

std::string Bureaucrat::getName(void){
	return (this->name);
}
int Bureaucrat::getGrade(void){
	return (this->grade);
}

void Bureaucrat::incrementGrade(){
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade(){
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

Bureaucrat::NullPointException::NullPointException(void){
	std::cout << "Name Empty Exception" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
	std::cout <<  "Grade too high..."<< std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
	std::cout <<  "Grade too low..."<< std::endl;
}


std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << " Bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}