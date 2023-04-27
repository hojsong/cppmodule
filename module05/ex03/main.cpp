#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main()
{
    Intern intern;
    AForm *form;
	Bureaucrat bureaucrat("John", 150);

    std::string type;
	type = "robotomy request";
	// type = "presidential pardon";
    // type =  "shrubbery creation";
    form = &intern.makeForm(type, "home");
	std::cout << "---------- 1 TRY -------------" << std::endl;
    try {
        bureaucrat.executeForm(*form);
    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
	std::cout << "---------- 2 TRY -------------" << std::endl;
    try {
        bureaucrat.signForm(*form);
        bureaucrat.setGrade(149);
        bureaucrat.executeForm(*form);
    } catch (const std::exception &e) {
    }
	std::cout << "---------- 3 TRY -------------" << std::endl;
    try {
        bureaucrat.setGrade(1);
		bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
    } catch (const std::exception &e) {
    }
    delete form;
    return 0;
}