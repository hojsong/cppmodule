#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>

class Span{
	private:
		std::vector<int> n_num;
		unsigned int n_size;
	public:
		Span();
		Span(unsigned int x);
		Span(const Span& obj);
		virtual Span& operator=(const Span& obj);
		virtual ~Span();
		void easyadd(std::vector<int> con);
		void addNumber(const int X);
		unsigned int get_size(void) const;
		unsigned int get_idx(void) const;
		int shortestSpan(void);
		int longestSpan(void);
};

#endif