#include "Span.hpp"

void f(){
	system("leaks Span");
}

int main(){
	// atexit(f);
	Span sp = Span(5);
	Span sp2 = Span(1000);
	Span sp3 = Span(100);
	std::vector<int> v;
	std::srand(std::time(nullptr)); // seed 초기화

	try{
		for (int i = 0; i < 1000; i++){
			int value = std::rand() % 10000000;
			v.push_back(value);
		}

		std::cout << "No Error Try" << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp2.easyadd(v);
		std::cout << "sp  shortest: " ;
		std::cout << sp.shortestSpan();
		std::cout << " / longest: " ;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "sp2 shortest: " ;
		std::cout << sp2.shortestSpan();
		std::cout << " / longest: " ;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try{
		std::cout << "Error Try : Size Over" << std::endl;
		// sp.addNumber(6);
		sp3.easyadd(v);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}