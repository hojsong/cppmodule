#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>

class RPN{
	private : 
		std::list<int> result;
	public :
		RPN();
		virtual ~RPN();
		RPN(RPN const &obj);
		RPN& operator=(RPN const &obj);
		void resultinit(char *str);
		void execve(char str);
};

#endif