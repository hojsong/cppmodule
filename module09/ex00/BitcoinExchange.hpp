#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <stdexcept>
#include <sstream>
#include <string>
#include <stack>
#include <algorithm>

struct Bitcoin {
    std::stack<std::string> day;
	std::stack<std::string>	value;
};

class BitcoinExchange{
	private :
		Bitcoin input;
		Bitcoin data;
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &obj);
		BitcoinExchange& operator=(BitcoinExchange const &obj);
		int setFile(FILE *fd);
		int setFile2(FILE *fd);
		void print(void);
		std::string easyfind(std::stack<std::string> con, std::stack<std::string> val, std::string value);
		std::string easyprint(std::stack<std::string> con, std::stack<std::string> val, std::stack<std::string> con2, std::stack<std::string> val2);
};

#endif