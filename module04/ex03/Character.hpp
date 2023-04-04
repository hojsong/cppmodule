#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
    private :
        AMateria me[4];
    public :
        virtual Character();
        virtual ~Character();
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, Character& target) = 0;
};