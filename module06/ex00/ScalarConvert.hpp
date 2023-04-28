#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <iostream>
#include <string.h>
#include <sstream>
#include <cmath>
#include <limits.h>

class ScalarConvert
{
	private:
		std::string value;
		int			i;
		float		f;
		int			c;
		double		d;
	public:
		ScalarConvert(void);
		ScalarConvert(std::string value);
	    ScalarConvert(const ScalarConvert& obj);
	    virtual ScalarConvert& operator=(const ScalarConvert& obj);
		virtual ~ScalarConvert();
		void		setValue(std::string val);
		std::string	getValue(void) const;
		void		getInt(void) ;
		void		getFloat(void) ;
		void		getChar(void) ;
        void	  	getDouble(void) ;
		void		convert(std::string str);
		class CannotPrintChar : public std::exception
		{
			public:
				CannotPrintChar();
		};
		class ConvertFail : public std::exception
		{
			public:
				ConvertFail();
		};
};

#endif