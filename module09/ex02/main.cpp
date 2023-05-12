#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2){
		std::cout << "Error: No Have arguments" << std::endl;
		return (1);
	}
	PmergeMe myMerge;
	
	try { 
		myMerge.execute(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}