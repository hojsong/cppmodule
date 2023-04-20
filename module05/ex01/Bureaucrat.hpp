#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
		std::string getName(void);
		int getGrade(void);
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
		void signForm(Form &form);
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif