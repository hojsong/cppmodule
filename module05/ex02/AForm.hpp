#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private :
		std::string name;
		bool		isSigned;
		int			signGrade;
		int			executeGrade;
	public :
		AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm &AForm);
		AForm&	operator=(const AForm &AForm);
		virtual ~AForm();

		std::string getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		void		setSign(bool re);
		void		setName(std::string name);
		void		setSignGrade(int SignGrade);
		void		setExecuteGrade(int ExecuteGrade);
		void		beSign(Bureaucrat const &obj);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		class GradeTooLowException : public std::exception{
			public:
				GradeTooLowException();
		};
		class AFormSignedAlreadyException : public std::exception{
			public:
				AFormSignedAlreadyException();
		};
};

std::ostream		&operator<<(std::ostream &out, AForm &AForm);

#endif