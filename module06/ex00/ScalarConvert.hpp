#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP
#include <iostream>
#include <string.h>
#include <cmath>
#include <limits.h>

class ScalarConvert
{
	private:
		std::string value;
		int			i;
		float		f;
		char		c;
		double		d;
	public:
		ScalarConvert(void);
		ScalarConvert(std::string value);
	    ScalarConvert(const ScalarConvert& obj);
	    virtual ScalarConvert& operator=(const ScalarConvert& obj);
		virtual ~ScalarConvert();
		void		setValue(std::string val)const;
		std::string	getValue(void) const;
		int			getInt(void) const;
		float		getFloat(void) const;
		char		getChar(void) const;
        double	  	getDouble(void) const;
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

endif