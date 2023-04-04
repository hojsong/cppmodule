#include "Dog.hpp"

Dog::Dog(void){
    std::cout << "Dog Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &obj){
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = obj;
}

Dog::Dog(Brain const &brain) {
	*this->br = brain;
}

Dog& Dog::operator=(const Dog &obj){
	std::cout << "Dog Assignation operator called" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}

std::string Dog::getType(void) const{
    return (this->type);
}

Dog::~Dog(){
    std::cout << "Dog Constructor Destroy called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Ya Ong Ya Ong" << std::endl;
}
void Dog::setter(std::string str, int idx){
	std::cout << "Dog Setter function called" << std::endl;
	Brain bx;

    bx.setter(str, idx);
    br = &bx;
}

std::string Dog::getter(void){
    return (br->getter());
}