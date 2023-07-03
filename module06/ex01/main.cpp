#include "Serializer.hpp"

int main(){
	Data *d[5];
	for (int i=0; i<5; i++)
		d[i] = new Data;

	d[0]->i = 42;
	uintptr_t t = Serializer::serialize(d[0]);
	std::cout << "uintptr_t:  " << t << std::endl;
	std::cout << "uintptr_t hex: " << std::hex << t << std::endl;
	std::cout << "Data *     : " << Serializer::deserialize(t) << std::endl;
	d[1]->c = 's';
	uintptr_t t1 = Serializer::serialize(d[1]);
	std::cout << "uintptr_t:  " << std::dec << t1 << std::endl;
	std::cout << "uintptr_t hex: " << std::hex << t1 << std::endl;
	std::cout << "Data *     : " << Serializer::deserialize(t1) << std::endl;
	d[2]->f = 42.0f;
	uintptr_t t2 = Serializer::serialize(d[2]);
	std::cout << "uintptr_t:  " << std::dec << t2 << std::endl;
	std::cout << "uintptr_t hex: " << std::hex << t2 << std::endl;
	std::cout << "Data *     : " << Serializer::deserialize(t2) << std::endl;
	d[3]->d = 42.0;
	uintptr_t t3 = Serializer::serialize(d[3]);
	std::cout << "uintptr_t:  " << std::dec << t3 << std::endl;
	std::cout << "uintptr_t hex: " << std::hex << t3 << std::endl;
	std::cout << "Data *     : " << Serializer::deserialize(t3) << std::endl;
	d[4]->str = "42Seoul";
	uintptr_t t4 = Serializer::serialize(d[4]);
	std::cout << "uintptr_t:  " << std::dec << t4 << std::endl;
	std::cout << "uintptr_t hex: " << std::hex << t4 << std::endl;
	std::cout << "Data *     : " << Serializer::deserialize(t4) << std::endl;
	for (int i=0; i<5; i++)
		delete d[i];
	return (0);
}