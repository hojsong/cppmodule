#include "Animal.hpp"

class Dog : public Animal{
	private :
		Brain *br;
    public :
        Dog(void);
        Dog(const Dog &obj);
	    Dog& operator=(const Dog &obj);
		Dog(Brain const &brain);
	    virtual ~Dog();
	    virtual void makeSound(void) const;
		void setter(std::string str, int idx);
		std::string getter(void);
	    virtual std::string getType(void) const;
};