#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);    
        AMateria(std::string const & type);
        virtual ~AMateria(void);
        AMateria(const AMateria & obj);
        AMateria& operator=(AMateria const &obj);
        virtual std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif