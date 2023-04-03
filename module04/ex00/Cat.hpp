#include "Animal.hpp"

class Cat : public Animal{
    protected :
        std::string type;
    public :
        Cat(void);
        Cat(const Cat &obj);
	    Cat& operator=(const Cat &obj);
	    ~Cat(void);
	    virtual void makeSound(void) const;
};