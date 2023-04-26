#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	private :
		std::string name;
		int grade;
	public :
		Bureaucrat(void);
		Bureaucrat(int grade);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat& operator=(Bureaucrat const &obj);
		void setName(std::string name);
		void setGrade(int grade);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade();
		void decrementGrade();
		class NullPointException : public std::exception
		{
			public:
				NullPointException();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
		};
		void signForm(AForm &AForm);
		void executeForm(AForm const &form);
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif