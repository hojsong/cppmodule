#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
	this->target = "default";
	this->setName("ShrubberyCreationForm");
	this->setSign(false);
	this->setSignGrade(145);
	this->setExecuteGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target){
	this->target = target;
	this->setName("ShrubberyCreationForm");
	this->setSign(false);
	this->setSignGrade(145);
	this->setExecuteGrade(137);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src){
	this->target = src.target;
	this->setName(src.getName());
	this->setSign(src.getSign());
	this->setSignGrade(src.getSignGrade());
	this->setExecuteGrade(src.getExecuteGrade());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src){
	if (this != &src){
		this->target = src.target;
		this->setName(src.getName());
		this->setSign(src.getSign());
		this->setSignGrade(src.getSignGrade());
		this->setExecuteGrade(src.getExecuteGrade());
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

void ShrubberyCreationForm::setTarget(std::string target){
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget() const{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!this->getSign()) {
		std::cout << this->getName() << " form is not signed." << std::endl;
	} else {
		if (executor.getGrade() > this->getExecuteGrade()) {
			throw Bureaucrat::GradeTooLowException();
		} else {
    		std::ofstream outfile((this->target + "_shrubbery").c_str());
    		if (!outfile) {
	        	std::cout << "File Open Failed" << std::endl;
    		}
			else {
				outfile << "              v .   ._, |_  .,"<<std::endl;
				outfile << "           `-._\\/  .  \\ /    |/_"<<std::endl;
				outfile << "               \\\\  _\\, y | \\//"<<std::endl;
				outfile << "         _\\_.___\\\\, \\\\/ -.\\||"<<std::endl;
				outfile << "           `7-,--.`._||  / / ,"<<std::endl;
				outfile << "           /'     `-. `./ / |/_.'"<<std::endl;
				outfile << "                     |    |//"<<std::endl;
				outfile << "                     |_    /"<<std::endl;
				outfile << "                     |-   |"<<std::endl;
				outfile << "                     |   =|"<<std::endl;
				outfile << "                     |    |"<<std::endl;
				outfile << "--------------------/ ,  . \\--------._"<<std::endl;
			}
		}
	}
}