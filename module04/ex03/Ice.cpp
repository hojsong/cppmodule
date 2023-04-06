#include "Ice.hpp"

Ice::Ice(void){
    this->type = "ice";
}

Ice::~Ice(void){

}

Ice::Ice(std::string const & type){
    this->type = type;
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