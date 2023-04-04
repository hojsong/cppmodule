#include "Animal.hpp"

class Cat : public Animal{
	private :
		Brain *br;
    public :
        Cat(void);
        Cat(const Cat &obj);
	    Cat& operator=(const Cat &obj);
		Cat(Brain const &brain);
	    virtual ~Cat(void);
	    virtual void makeSound(void) const;
		void setter(std::string str, int idx);
		std::string getter(void);
};