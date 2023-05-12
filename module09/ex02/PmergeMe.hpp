#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <deque>
#include <stdexcept>
#include <sstream>
#include <ctime>
#include <time.h>

class PmergeMe{
	private :
		std::vector<unsigned int> p_ui_s;
		std::vector<unsigned int> p_ui_e;
		std::deque<unsigned int> q_ui_s;
		std::deque<unsigned int> q_ui_e;
		std::clock_t start_time_v;
		std::clock_t end_time_v;
		std::clock_t start_time_q;
		std::clock_t end_time_q;
	public :
		PmergeMe();
		virtual ~PmergeMe();
		PmergeMe(PmergeMe const &obj);
		PmergeMe& operator=(PmergeMe const &obj);
		void	execute(int argc, char **argv);
		void	initPmerge(int argc, char **argv);
		void	executePmerge(void);
		void	initQmerge(int argc, char **argv);
		void	executeQmerge(void);
		void	executePrint(void);
};

#endif