#include "Animal.hpp"

class Dog : public Animal{
    public :
        Dog(void);
        Dog(const Dog &obj);
	    Dog& operator=(const Dog &obj);
	    virtual ~Dog();
	    virtual void makeSound(void) const;
};