#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc == 1){
		std::cout << "Error" << std::endl;
		return (1);
	}
	else if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return (1);
	}

	RPN dest;

	try {
		dest.resultinit(argv[1]);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}