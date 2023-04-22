#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *am[4];
        int      stack;
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &obj);
        virtual MateriaSource& operator=(const MateriaSource& obj);
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type) ;
};

#endif