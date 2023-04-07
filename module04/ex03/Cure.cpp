#include "Cure.hpp"

Cure::Cure(void){
    this->type = "cure";
}

Cure::~Cure(void){

}

Cure::Cure(std::string const & type){
    this->type = type;
}

Cure& Cure::operator=(Cure const &obj){
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

std::string const & Cure::getType() const{
    return (this->type);
}

Cure* Cure::clone() const{
    Cure *result = new Cure(this->type);
    return (result);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals "<< target.getName() << " wounds *" << std:: endl;
}