#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class ICharacter;

class Ice : public AMateria{
    public:
        Ice(void);
        ~Ice(void);
        Ice(std::string const & type);
        Ice& operator=(Ice const &obj);
        std::string const & getType() const;
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif