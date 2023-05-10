#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <stdexcept>
#include <sstream>
#include <ctime>
#include <time.h>

class PmergeMe{
	private :
		std::vector<unsigned int> p_ui_s;
		std::vector<unsigned int> p_ui_e;
		std::clock_t start_time;
		std::clock_t end_time;
	public :
		PmergeMe();
		virtual ~PmergeMe();
		PmergeMe(PmergeMe const &obj);
		PmergeMe& operator=(PmergeMe const &obj);
		void	initPmerge(int argc, char **argv);
		void	executePmerge(void);
		void	executePrint(void);
};

#endif