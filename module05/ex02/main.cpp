#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	Bureaucrat bureaucrat("John", 150);
	RobotomyRequestForm form("home");
	// PresidentialPardonForm form("home");
    // ShrubberyCreationForm form("home");

    try {
        bureaucrat.executeForm(form);
    } catch (const std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        bureaucrat.signForm(form);
        bureaucrat.setGrade(149);
        bureaucrat.executeForm(form);
    } catch (const std::exception &e) {
    }

    try {
        bureaucrat.setGrade(1);
		bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
    } catch (const std::exception &e) {
    }

    return 0;
}