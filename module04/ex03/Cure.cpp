#include "Cure.hpp"

Cure::Cure(void){

    std::cout << "cure constructor create" << std::endl;
    this->type = "cure";
}

Cure::~Cure(void){
    std::cout << "cure destructor" << std::endl;
}

Cure::Cure(std::string const & type){
    std::cout << "cure constructor create2" << std::endl;
    this->type = type;
}

Cure::Cure(const Cure &obj){
    *this = obj;
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