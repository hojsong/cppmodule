#include "Animal.hpp"

class Dog : public Animal{
    protected :
        std::string type;
    public :
        Dog(void);
        Dog(const Dog &obj);
	    Dog& operator=(const Dog &obj);
	    ~Dog(void);
	    virtual void makeSound(void) const;
};