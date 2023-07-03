#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		virtual ~Serializer();
		Serializer(Serializer const &obj);
		virtual Serializer& operator= (Serializer const& obj);
	public:
    	static uintptr_t serialize(Data* ptr);
	    static Data* deserialize(uintptr_t raw);
};

#endif
