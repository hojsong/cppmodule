#include "ScalarConvert.hpp"

int main(int argc, char **argv){
	ScalarConvert a;

	if (argc == 1){
		std::cout << "No Have Arguments" << std::endl;
		return (1);
	}
	else if (argc != 2){
		std::cout << "Too Many Arguments" << std::endl;
		return (1);
	}
	else if (argv[1][0] == '\0') {
		std::cout << "Bad Arguments" << std::endl;
		return (1);
	}
	else{
		a.convert(argv[1]);
	}
	return (0);
}