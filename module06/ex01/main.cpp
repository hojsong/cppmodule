#include "Serializer.hpp"

int main(){
	Data *d = new Data;
	Serializer a;
	uintptr_t t;

	d->i = 42;
	t = a.serialize(d);
	std::cout << "uintptr_t: " << t << std::endl;
	std::cout << "Data *   : " << a.deserialize(t) << std::endl;
	d->c = 's';
	t = a.serialize(d);
	std::cout << "uintptr_t: " << t << std::endl;
	std::cout << "Data *   : " << a.deserialize(t) << std::endl;
	d->f = 42.0f;
	t = a.serialize(d);
	std::cout << "uintptr_t: " << t << std::endl;
	std::cout << "Data *   : " << a.deserialize(t) << std::endl;
	d->d = 42.0;
	t = a.serialize(d);
	std::cout << "uintptr_t: " << t << std::endl;
	std::cout << "Data *   : " << a.deserialize(t) << std::endl;
	d->str = "42Seoul";
	t = a.serialize(d);
	std::cout << "uintptr_t: " << t << std::endl;
	std::cout << "Data *   : " << a.deserialize(t) << std::endl;
	delete d;
	return (0);
}