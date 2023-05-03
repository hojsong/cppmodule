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
		int *n_num;
		unsigned int n_size;
		unsigned int now_idx;
	public:
		Span();
		Span(unsigned int x);
		Span(const Span& obj);
		virtual Span& operator=(const Span& obj);
		virtual ~Span();
		void addNumber(const int X);
		unsigned int get_size(void) const;
		unsigned int get_idx(void) const;
		int shortestSpan(void);
		int longestSpan(void);
};

template <typename T>
typename T::iterator easyadd(Span &as, T& con)
{
	typename T::iterator gn = con.begin();
	for (size_t i = 0; i < con.size(); i++){
		if (as.get_idx() < as.get_size()){
			as.addNumber(*gn);
			gn++;
		}
		else {
			std::ostringstream oss;
			oss << "index : " << as.get_idx() << "Span cannot addNum execute";
			throw std::out_of_range(oss.str());
		}
	}
	return (gn);
}

#endif