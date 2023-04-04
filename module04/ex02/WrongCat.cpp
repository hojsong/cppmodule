#include "WrongCat.hpp"

WrongCat::WrongCat(void){
    std::cout << "WrongCat Default Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj){
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = obj;
}
WrongCat& WrongCat::operator=(const WrongCat &obj){
	std::cout << "WrongCat Assignation operator calleßßßßßd" << std::endl;
    if (this->type == obj.type)
        return (*this);
    this->type = obj.type;
    return (*this);
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat Constructor Destroy called" << std::endl;
}

void WrongCat::makeSound(void) const{
    std::cout << "Ya Ong Ya Ong" << std::endl;
}
