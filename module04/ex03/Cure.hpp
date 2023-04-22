#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class ICharacter;

class Cure : public AMateria{
    public:
        Cure(void);
        ~Cure(void);
        Cure(const Cure &obj);
        Cure(std::string const & type);
        Cure& operator=(Cure const &obj);
        std::string const & getType() const;
        Cure* clone() const;
        void use(ICharacter& target);
};

#endif