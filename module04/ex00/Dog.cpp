#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Dog Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &obj){
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = obj;
}
Dog& Dog::operator=(const Dog &obj){
	std::cout << "Dog Assignation operator called" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}
Dog::~Dog(){
    std::cout << "Dog Constructor Destroy called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Ya Ong Ya Ong" << std::endl;
}
