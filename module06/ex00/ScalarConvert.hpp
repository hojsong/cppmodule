#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <cmath>
#include <limits.h>

class ScalarConvert
{
	private :
		ScalarConvert();
		~ScalarConvert();
		ScalarConvert(ScalarConvert const &obj);
		ScalarConvert& operator= (ScalarConvert const& obj);
	public:
		static void		printInt(std::string str) ;
		static void		printFloat(std::string str) ;
		static void		printChar(std::string str) ;
        static void	  	printDouble(std::string str) ;
		static void		convert(std::string str);
};

#endif