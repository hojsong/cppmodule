#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	public :
		Intern(void);
		Intern(Intern const & obj);
		Intern& operator=(const Intern& src);
		virtual ~Intern();
		AForm& makeForm(std::string type ,std::string target);
		class NotFindType : public std::exception
		{
			public:
				NotFindType();
		};
};

#endif