#include "AMateria.hpp"

AMateria::AMateria(void){
    this->type = "default";
}

AMateria::AMateria(std::string const & type){
    this->type = type;
}

AMateria::~AMateria(void){

}

AMateria& AMateria::operator=(AMateria const &obj){
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    std::cout << "AMateria "<< target.getName() << " USE" << std:: endl;
}