#include "Intern.hpp"

Intern::Intern(void){
    std::cout << "Default Intern constructor call" << std::endl;
}

Intern::Intern(Intern const & obj){
    std::cout << "copy Intern constructor call" << std::endl;
    if (this != &obj)
        *this = obj;
}

Intern& Intern::operator=(const Intern& src){
    std::cout << "copy Intern constructor call" << std::endl;
    if (this != &src)
        *this = src;
    return (*this);
}

Intern::~Intern(){
    std::cout << "Intern deconstructor call" << std::endl;
}

// 이건 학원가서 바꿀것.
AForm& Intern::makeForm(std::string type ,std::string target){
    AForm *result;
    int   i;
    void  (AForm::*f) = {&PresidentialPardonForm::PresidentialPardonForm(),
               &RobotomyRequestForm::RobotomyRequestForm(), 
               &ShrubberyCreationForm::ShrubberyCreationForm()};
    std::string str[3] = {
        "presidential pardon", "robotomy request" ,"shrubbery creation"
    };
    for (i = 0; i < 3; i++){
        if (str[i] == type)
            break;
    }
    if (i == 3)
        result = NULL;
    else
        result = new f[i](target);
    return (result);
}