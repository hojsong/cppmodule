#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <sstream>

template<class T>
class Array {
	private:
    	T* m_data;
    	unsigned int m_size;
	public:
	    Array();
        Array(unsigned int size);
    	Array(const Array& other);
    	Array& operator=(const Array& other);
    	virtual ~Array();
    	T& operator[](unsigned int index);
    	unsigned int size() const ;
};

#endif