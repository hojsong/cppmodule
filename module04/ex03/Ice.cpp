#include "Ice.hpp"

Ice::Ice(void){
    std::cout << "ice constructor create" << std::endl;
    this->type = "ice";
}

Ice::~Ice(void){
    std::cout << "ice destructor" << std::endl;
}

Ice::Ice(std::string const & type){

    std::cout << "ice constructor create2" << std::endl;
    this->type = type;
}

Ice::Ice(const Ice &obj){
    *this = obj;
}

Ice& Ice::operator=(Ice const &obj){
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

std::string const & Ice::getType() const{
    return (this->type);
}

Ice* Ice::clone() const{
    Ice *result = new Ice(this->type);
    return (result);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at"<< target.getName() << " *" << std:: endl;
}