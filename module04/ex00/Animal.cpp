#include "Animal.hpp"
Animal::Animal(void){
    std::cout << "Animal Default Constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &obj){
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal &obj){
	std::cout << "Animal Assignation operator called" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal Constructor Destroy called" << std::endl;
}

void Animal::makeSound(void) const{
    std::cout << "Animal Animal" << std::endl;
}

std::string Animal::getType(void) const{
    return (this->type);
}