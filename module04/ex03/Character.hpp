#include "ICharacter.hpp"

class Character : public ICharacter{
    private :
        std::string name;
        AMateria *me[4];
    public :
        Character(void);
        Character(std::string name);
        virtual ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        virtual void ChargeReArrange(int idx);
};