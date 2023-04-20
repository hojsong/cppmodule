#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form fa = Form("avans", 3, 1);
		std::cout << fa;
		d.signForm(fa);
		d.signForm(fa);
		std::cout << fa;
	}
	catch (std::exception& e)
	{}
	return 0;
}