#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
    virtual AMateria();
    virtual ~AMateria();
    virtual AMateria(std::string const & type);
    virtual AMateria& operator=(AMateria const &obj);
    virtual std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};