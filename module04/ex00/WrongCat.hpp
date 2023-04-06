#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat(void);
        WrongCat(const WrongCat &obj);
	    WrongCat& operator=(const WrongCat &obj);
	    ~WrongCat(void);
	    void makeSound(void) const;
};

#endif