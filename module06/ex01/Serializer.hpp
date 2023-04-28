#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include "Data.hpp"

class Serializer {
	public:
		Serializer();
		virtual ~Serializer();
		Serializer(Serializer const &obj);
		virtual Serializer& operator= (Serializer const& obj);
    	static uintptr_t serialize(Data* ptr);
	    static Data* deserialize(uintptr_t raw);
};

#endif
