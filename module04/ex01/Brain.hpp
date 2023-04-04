#include <iostream>

class Brain{
	private :
		std::string ideas[100];
	public :
		Brain(void);
		~Brain(void);
		Brain& operator=(Brain const &obj);
		void setter(std::string str, int idx);
		std::string getter(void);
};