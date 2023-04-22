#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    protected:
	    std::string type;
    public:
	    Animal(void);
	    Animal(const Animal& obj);
	    virtual Animal& operator=(const Animal& obj);
	    virtual ~Animal();
	    virtual void makeSound(void) const = 0;
	    virtual std::string getType(void) const = 0;
};

#endif