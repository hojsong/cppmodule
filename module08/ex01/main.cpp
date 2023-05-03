#include "Span.hpp"

int main(){
	Span sp = Span(5);
	Span sp2 = Span(1000);
	std::vector<int> v;
	std::srand(std::time(nullptr)); // seed 초기화

    for (int i = 0; i < 1000; i++){
        int value = std::rand() % 10000000;
        v.push_back(value);
    }
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	::easyadd(sp2, v);
	std::cout << "sp     shortest: " ;
	std::cout << sp.shortestSpan();
	std::cout << "/ longest: " ;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "Vactor shortest: " ;
	std::cout << sp2.shortestSpan();
	std::cout << "/ longest: " ;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}