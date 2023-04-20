#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// Bureaucrat a("a", 150);
		// Bureaucrat b("b", 1);

		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
		// std::cout << std::endl;
		
		// a.incrementGrade();
		// b.decrementGrade();
		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
		// std::cout << std::endl;

//-------------------------------

		// Bureaucrat a("a", 1);

		// std::cout << a << std::endl;
		// std::cout << std::endl;
		
		// a.incrementGrade();
		// std::cout << a << std::endl;
		// std::cout << std::endl;

//-------------------------------

		Bureaucrat b("b", 150);

		std::cout << b << std::endl;
		std::cout << std::endl;

		b.decrementGrade();
		
		std::cout << b << std::endl;
		std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		
	}
	
	return (0);
}