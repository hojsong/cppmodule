#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj){
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj){
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Constructor Destroy called" << std::endl;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return (this->type);
}