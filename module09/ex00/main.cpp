#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc == 1){
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	else if (argc != 2)
	{
		std::cout << "Error: too many argument" << std::endl;
		return (1);
	}

    FILE* file = std::fopen(argv[1], "r");
	BitcoinExchange Exchange;
	
    if (file == NULL) {
        std::cout << "Failed to " << argv[1] <<" open file" << std::endl;
        return 1;
    }

	if(Exchange.setFile(file) == 1){
        std::cout << "Failed to " << argv[1] <<" Error" << std::endl;
        return 1;
	}

    std::fclose(file);

	FILE* file2 = std::fopen("data.csv", "r");
	if (file2 == NULL) {
        std::cout << "Failed to data.csv open file" << std::endl;
        return 1;
    }
	if (Exchange.setFile2(file2) == 1){
        std::cout << "Failed to data.csv Error" << std::endl;
        return 1;
	}
    std::fclose(file2); 
	
	Exchange.print();
    return 0;
}