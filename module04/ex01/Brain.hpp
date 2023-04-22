#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	private :
		std::string ideas[100];
	public :
		Brain(void);
		Brain(const Brain &obj);
		Brain& operator=(Brain const &obj);
		void setter(std::string str, int idx);
		std::string getter(void);
		virtual ~Brain(void);
};

#endif