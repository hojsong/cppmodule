#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private :
		std::string name;
		bool		isSigned;
		int			signGrade;
		int			executeGrade;
	public :
		Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form &form);
		Form&	operator=(const Form &form);
		virtual ~Form();

		std::string getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		void		setSign(bool re);
		void		setName(std::string name);
		void		setSignGrade(int SignGrade);
		void		setExecuteGrade(int ExecuteGrade);
		void		beSign(Bureaucrat &obj);
		class GradeTooLowException : public std::exception{
			public:
				GradeTooLowException();
		};
		class FormSignedAlreadyException : public std::exception{
			public:
				FormSignedAlreadyException();
		};
};

std::ostream		&operator<<(std::ostream &out, Form &Form);

#endif