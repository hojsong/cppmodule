#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <random>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
		std::string getTarget() const;
		void	setTarget(std::string target);
		virtual ~RobotomyRequestForm();
		virtual void execute(Bureaucrat const &executor) const;
};

#endif