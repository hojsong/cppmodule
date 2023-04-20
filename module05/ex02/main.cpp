#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	try
	{
		Bureaucrat c;
		c = Bureaucrat("Amenkhotep", 150);
		Bureaucrat d;
		d = Bureaucrat("Antiokhey", 1);
		std::cout << c << d;
		c.incrementGrade();
		d.decrementGrade();
		std::cout << c << d;
		AForm fa = AForm("avans", 3, 1);
		std::cout << fa;
		d.signAForm(fa);
		d.signAForm(fa);
		std::cout << fa;
	}
	catch (std::exception& e)
	{}
	return 0;
}