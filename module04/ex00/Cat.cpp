#include "Cat.hpp"

Cat::Cat(void){
    std::cout << "Cat Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &obj){
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = obj;
}
Cat& Cat::operator=(const Cat &obj){
	std::cout << "Cat Assignation operator called" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}
Cat::~Cat(void){
    std::cout << "Cat Constructor Destroy called" << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << "Ya Ong Ya Ong" << std::endl;
}