#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Object is of type A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Object is of type B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Object is of type C" << std::endl;
    } else {
        std::cout << "Unknown object type" << std::endl;
    }
}

Base* generate(void){
	Base *base;
	std::srand(std::time(0));
	int x = std::rand() % 3;

	if (x == 0)
		base = new A();
	else if (x == 1)
		base = new B();
	else
		base = new C();
	return (base);
}

int main(){
	Base *random;

	random = generate();
	identify(random);
	identify(NULL);
	delete random;
	return (0);
}