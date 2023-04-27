#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string.h>
#include <cmath>
#include <limits.h>

template <typename T>
struct holder
{
	T		value;
	std::string	err;
};
class Convert
{
	private:
		std::string value;
		holder<double>	d_val;
		holder<int>		i_val;
		holder<float>	f_val;
		holder<char>	c_val;
	public:
		Convert(void);
		Convert(std::string value);
		std::string	getValue(void) const;
		void	setValue(std::string val);
		void	getInt(double val);
		void	getFloat(double val);
		void	getChar(double val);
        void    getDouble(double val);
	    ~Convert();
};

endif